
// 数字反转
# include <stdio.h>

int main(){
    float a;
    scanf("%f",&a);
   
    int a_change = (int)(a*10);
    float ans,b,c,d,e;
    b = (float)(a_change/1000);
    c = (float)(a_change/100)-b*10;
    d = (float)(a_change/10)-b*100-c*10;
    e = (float)(a_change%10);
    ans = (b + c*10 + d*100 + e*1000)/1000;

    printf("%.3f",ans);

    return 0;

}