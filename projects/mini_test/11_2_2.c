# include <stdio.h>
# include <math.h>

int main()
{
    double x,y;

    scanf("%lf",&x);
        
    if (x > 6)
    {
        y = (pow(x,2)+4*x-6)*(5.0/27.0);
    }
    else if (x <= 0)
    {
        y = fabs(pow(x,3)+4)*(23.0/7.0);
    }
    else 
    {
        y = log(16+x)/log(3);
    }

    printf("%.3lf",y);

    return 0;
}