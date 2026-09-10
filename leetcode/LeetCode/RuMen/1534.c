/*
暴力枚举：
1.计整数数组为A；
2.令数组元素满足这几个条件
3.满足加1
*/
# include <stdio.h>

int countGoodTriplets(int* arr, int arrSize, int a, int b, int c) {
    int ans = 0;
    for (int i = 0; i < arrSize; i++){
        for (int j = i + 1; j < arrSize; j++){
            for (int k = j + 1; k < arrSize; k++){
                if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c){
                    ans++;
                }
            }
        }
    }
    return ans;
}


/*
程序的运行类似于枚举三元数组（0，1，2）->(0,1,3)->...->(0,1,size-1)-->(0,2,3).....
*/