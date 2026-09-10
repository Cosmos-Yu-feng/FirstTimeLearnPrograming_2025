/*
最多能买的问题我选择向下取整
1.换算
2.取整
*/

# include <stdio.h>
# include <math.h>
int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    int ans = (int)floor((a*10+b)/(19.0));
    printf("%d\n",ans);

    return 0;
}