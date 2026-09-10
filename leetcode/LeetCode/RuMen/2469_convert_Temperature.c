# include <stdio.h>
# include <stdlib.h>

double* convertTemperature(double celsius,int* returnSize)
{
    double* reasult = (double *)malloc(sizeof(double)*2);
    reasult[0] = celsius +273.15;
    reasult[1] = celsius * 1.80 + 32.00;
    return reasult;
}

int main()
{
    int returnSize = 2;
    double* reasult =  convertTemperature(32,&returnSize);

    printf("转换后的开氏度：%f\n",reasult[0]);
    printf("转换后的华氏度：%f\n",reasult[1]);

    free(reasult);

    return 0;
}