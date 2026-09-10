/*
取整问题：向下取整
考虑边界值：
*/

# include <stdio.h>
# include <math.h>

int main()
{
    int m;
    double t,s;
    scanf("%d %lf %lf",&m,&t,&s);
    if (t == 0)
    {
        printf("0\n");
    }
    else
    {
        int eat = (int)ceil(s/t);
        if (eat >= m)
        {
            printf("0\n");
        }
        else
        {
            int ans = m - eat;
            printf("%d\n",ans);
        }

    }
    

    return 0;
}