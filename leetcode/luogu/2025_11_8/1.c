/*
利用多维数组来储存数据
边界情况：不会不高兴——所有天数都需要小于8小时
需要从前往后遍历
利用一个中间值来指向最终输出
*/

# include <stdio.h>
int main()
{
    int day[2][7];
    scanf("%d %d",day,day+1);
    printf("%d %d\n",day[0][0],day[1][0]);
    return 0;
}