# include <stdio.h>

int main(){
    float t,ans_1;
    int n,ans_2;
    scanf("%f %d",&t,&n);

    ans_1 = t / n;
    ans_2 = 2*n;

    printf("%.3f\n%d",ans_1,ans_2);

    return 0;
}