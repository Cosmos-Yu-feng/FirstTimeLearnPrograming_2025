// 给你一个整数数组 nums 。
// 如果一组数字 (i,j) 满足 nums[i] == nums[j] 且 i < j ，就可以认为这是一组 好数对 。
// 返回好数对的数目。

// 在力扣中我用输入输出来调试，欸不对，或许我可以学学怎么调试我的代码

# include <stdio.h>
# include <stdlib.h>



// 首先，定义我的主要操作函数
int good_num_pairs(int* nums,int numsSize){
    
    // 对数组的声明与定义操作
    // int* nums = (int*)malloc(sizeof(int)*numsize);
    // for (int i=0;i<numsize;i++)
    // {
    //     printf("请为索引为%d的位置输入元素: \n",i);
    //     scanf("%d",nums+i);
    //     while(getchar() != '\n');
    // }

    int ans = 0;

    for (int i=0;i<numsSize-1;i++)
    {
        for (int j = i+1;j < numsSize;j++){
            if (nums[i] == nums[j])
            {
                ans += 1;
            }

        }
    }

    return ans;
    
}

int main()
{
    int* nums;
    int numsSize = 5;

    nums = (int*)malloc(sizeof(int)*numsSize);
    for (int i=0;i<numsSize;i++)
    {
        printf("请为索引为%d的位置输入元素: \n",i);
        scanf("%d",nums+i);

        while(getchar() != '\n');
    }

    int ans = good_num_pairs(nums,numsSize);

    printf("最终的好数对的数量为：%d",ans);

    free(nums);

    return 0;
}