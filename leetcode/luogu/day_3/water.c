# include <stdio.h>
# define pi 3.14

int main(){
    
    int h,r,V,ans;
    scanf("%d %d",&h,&r);
    V = (pi*(r^2)*h);
    if (20000 % V != 0){
        ans = (20000 / V) +1 ;
    }

    else{
        ans = 20000 / V;
    }

    printf("%d",ans);
    return 0;
}