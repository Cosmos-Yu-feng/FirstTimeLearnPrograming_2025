# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int Local,Luogu;
    Local = 5*n;
    Luogu = 3*n + 11;
    if (Local < Luogu)
    {
        printf("Local\n");
    }
    else
    {
        printf("Luogu\n");
    }

    return 0;
}