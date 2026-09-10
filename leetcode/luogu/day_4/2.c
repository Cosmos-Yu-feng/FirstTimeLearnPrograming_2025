/*
1.计算出体积V（我选择全部由cm单位计算）;
2.整除，向上取整，这里使用3目运算符简化if-else语句;
*/

// # include <stdio.h>

// int main()
// {
//     int h,r,V;
//     scanf("%d %d",&h,&r);

//     V = 3.14*r*r*h;
//     int time;
//     time = (20000 % V == 0)? 20000/V : 20000/V + 1;
//     printf("%d",time);

//     return 0;
// }
/*要考虑浮点数做除法运算的情况会有误差*/

# include <stdio.h>
# include <math.h>

int main()
{
    int h, r;
    scanf("%d %d", &h, &r);
    double V = 3.14 * r * r * h;
    int time = (int)ceil(20000.0 / V);
    printf("%d\n", time);
    return 0;
}