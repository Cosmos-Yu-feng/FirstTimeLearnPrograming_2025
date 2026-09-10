#include <stdio.h>
#include <stdlib.h>
#include "uthash.h"
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// 定义哈希表的每一个元素（键值对）
typedef struct hashNode {
    int key;
    int counts;
    UT_hash_handle hh;
} hashNode;

// 初始化哈希表的头指针
hashNode* HASH = NULL;

// 查找元素
hashNode* hash_search(int key) {    // 输入参数为键
    hashNode* p;                    // 声明一个哈希元素指针
    HASH_FIND_INT(HASH, &key, p);   // 在哈希表中查找元素，如果找到了，就返回这个结构到指针p，
                                    // 如果没找到，就返回NULL
    return p;
}

// 添加元素
void hash_add(int key, int counts) {
    hashNode* p;
    HASH_FIND_INT(HASH, &key, p);
    if (p == NULL) {
        p = (hashNode*)malloc(sizeof(hashNode));
        p -> key = key;
        HASH_ADD_INT(HASH, key, p);
        p -> counts = counts; 
    }
    else {
        p -> counts++;
    }
}

long long maxSum(int* nums, int numsSize, int m, int k) {
    long long sum = 0, current_sum = 0;
    HASH = NULL;  // 函数开始时清空哈希表
    // 整体框架使用滑动窗口，统计次数利用哈希表
    // 搭建初始框架——初始窗口：
    for (int i = 0; i < numsSize; i++) {
        int right = i;
        current_sum += nums[right];
        // 对于每一个进入窗口的元素，我需要检查是否在哈希表中，如果在，就值加1，如果不再就添加并把初始值设为1
        hash_add(nums[right], 1);

        int left = right - k + 1;
        if (left < 0) {continue;}
         
        if (HASH_COUNT(HASH) >= m) {
            sum = MAX(sum, current_sum);
        }

        current_sum -= nums[left];
        hashNode* pleft  = hash_search(nums[left]);
        if (pleft -> counts > 1) {
            pleft -> counts--;
        } 
        else if (pleft -> counts == 1) {
             HASH_DEL(HASH, pleft);
             free(pleft);
        }

    }
    return sum;
}


int main() {
    const int numSize = 6;
    const int m = 2, k = 4;
    int nums[6] = {2,6,7,3,1,7}; 
    long long sum = maxSum(nums, numSize, m, k);
    printf("%ld",sum);
}