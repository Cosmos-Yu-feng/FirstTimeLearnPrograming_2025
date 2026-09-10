/*
可以利用数组来储存该数满足该性质吗
然后根据数据来讨论
*/

# include <stdio.h>

int main()
{
    int num,feature[1];
    scanf("%d",&num);
    feature[0] = (num % 2 == 0)? 1:0;
    feature[1] = (num>4 && num<=12)? 1:0;

    if (feature[0]==1 && feature[1]==1)
    {
        printf("1 ");
    }
    else
    {
        printf("0 ");
    }

    if (feature[0]==1 || feature[1]==1)
     {
        printf("1 ");
    }
    else
    {
        printf("0 ");
    }

    if ((feature[0]==1 &&feature[1]==0)||(feature[0]==0 && feature[1]==1))
     {
        printf("1 ");
    }
    else
    {
        printf("0 ");
    }

    if (feature[0]==0 && feature[1]==0)
     {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}