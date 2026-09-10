/*
1.将两个时间转化为分钟做差
2.然后转化为标准时间
*/

# include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    int start_time,end_time,dt;
    start_time = a * 60 + b;
    end_time = c * 60 + d; 
    dt = end_time - start_time;
    
    int hour = dt/60;
    int min = dt%60;

    printf("%d %d",hour,min);
    return 0;
}