# include <stdio.h>
# include <math.h>

int main(){
    float a,b,c,p,ans;

    scanf("%f %f %f",&a,&b,&c);

    p = (a+b+c)/2;

    ans = pow(p*(p-a)*(p-b)*(p-c),0.5);

    printf("%.1f",ans);
    
    return 0;
}