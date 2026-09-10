/*
输入问题编号->进入问题存储地->取出答案
*/

# include <stdio.h>
# include <math.h>

int main()
{
    int ques_num;
    scanf("%d",&ques_num);

    switch (ques_num)
    {
        double ans,C,S,V,pi;
        case 1:
            printf("I love Luogu!\n");
            break;
    
        case 2:
            printf("6 4\n");
            break;
    
        case 3:
            printf("3\n12\n2\n");
            break;
    
        case 4:
            ans = 500.0/3.0;
            printf("%.3lf\n",ans);
            break;
    
        case 5:
            printf("15\n");
            break;
    
        case 6:
            ans = sqrt(117);
            printf("%lf",ans);
            break;
    
        case 7:
            printf("110\n90\n0\n ");
            break;

        case 8: 
            double r;
            pi = 3.141593;
            r = 5;
            C = 2*pi*r;
            S = pi*r*r;
            V = (4/3)*pi*r*r*r;
            printf("%lf\n%lf\n%lf\n",C,S,V);
            break;

        case 9:
            printf("22\n");
            break;

        case 10:
            printf("9\n");
            break;

        case 11:
            printf("100/3");
            break;
    
        case 12:
            printf("13\nR\n");
            break;
    
        case 13:
            pi = 3.141593;
            double V1 = 4 * pi * 64 / 3.0, V2 = 4 * pi * 1000 / 3.0;
            int a = (int)pow(V1 + V2,1/3.0);
            printf("%d\n",a);
            break;
    
        case 14:
            printf("50\n");
            break;
    }

    return 0;
}
