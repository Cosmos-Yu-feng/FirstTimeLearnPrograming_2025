# include <stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);

    int ans = 0.2*A + 0.3*B + 0.5*C;
    printf("%d\n",ans);

    return 0;
}