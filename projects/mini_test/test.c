# include <stdio.h>
int main() 
{
    int a, b, c;

    printf("Please input num:");
    scanf("%d", &a);
    while (getchar() != '\n');

    printf("Please input num:");
    scanf("%d",&b);
    while (getchar() != '\n');

    c = (b % 10) * 1000 + (a / 10) * 100 + (b / 10) * 10 + (a % 10);
    
    printf("c=%d\n",c);
    
    return 0;
}

