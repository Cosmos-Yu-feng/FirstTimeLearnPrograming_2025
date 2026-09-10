#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 110000
int main()
{
    int n;
    scanf("%d", &n);

    int arr[MAX_SIZE] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    
    //维护数组：下标为1到n-1；初始值为0;
    int count[MAX_SIZE] = {0};
    // 若差值出现为i，则索引为i的值修改为1；
    for (int j = 0; j < n-1; j++)
    {
        if (abs(arr[j]-arr[j+1] == 0) || abs(arr[j]-arr[j+1] > n-1))
        {
            printf("Not jolly");
            return 0;
        }   
        count[abs(arr[j]-arr[j+1])] = 1;
    }

    // 遍历索引从1到n-1，如果值出现0，则返回，打印不是
    int step = 0; // 设定计数器，统计查找的次数，如果运行完成，则step=n-1
    for (int k = 1; k <= n-1; k++)
    {
        if (count[k] == 0)
        {
            printf("Not jolly");
            break;
        }
        step++;
    }
    if (step == n-1)
    {
        printf("Jolly");
    }

    FILE *fl;
    if ((fl = fopen("doc.txt", "w")) == NULL)
    {
        printf("打开文件失败");
        exit(0);
    }
    fprintf(fl, "%s", "Helle,FILE expression?");
    fclose(fl);

    return 0;
}