# include <stdio.h>
int main()
{
    double m,h;
    scanf("%lf %lf",&m,&h);
    double BMI = m/(h*h);

    if (BMI < 18.5)
    {
        printf("Underweight\n");
    }
    else if (BMI >=18.5 && BMI <24)
    {
        printf("Normal\n");
    }
    else
    {
        printf("%.6g\nOverweight\n",BMI);
    }
    return 0;
}