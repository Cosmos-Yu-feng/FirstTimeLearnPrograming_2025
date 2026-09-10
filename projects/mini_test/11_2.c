# include <stdio.h>
# include <math.h>

int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    
    if ((a+b>c) && (a+c>b) && (b+c>a)){
        float s = (a+b+c)/2;
        float area = pow(s*(s-a)*(s-b)*(s-c),0.5);
        float perimeter = 2*s;
        printf("area = %.2f; perimeter = %.2f\n",area,perimeter);
    }
    else{
        printf("These sides do not correspond to a valid triangle\n");
    }
    
    return 0;
}