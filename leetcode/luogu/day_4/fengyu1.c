// // 输入路程和速度，输出时间
// // 可以求出路程所用时间，再结合时刻给出对应时间
 
// # include <stdio.h>

// int main()
// {
//     int s,v,dt;
//     scanf("%d %d",&s,&v);

//     // 对dt的处理，如果s/v可以整除，那么即该值，如果不能整除则+1
//     dt = s%v==0? s/v+10 : s/v+1+10;
//     // printf("%d",dt);

//     if (dt<8*60-10)
//     {
//         int min,a,b;
//         a = 0;
//         b = 8 - 1- dt/60;
//         min = 60-(dt-(dt/60)*60);
//         if (min>=10)
//         {
//             printf("%d%d:%d",a,b,min);
//         }
//         else if (min<10)
//         {
//             printf("%d%d:0%d",a,b,min);
//         }
//     }
//     else
//     {
//         int hour,min;
//         hour = 24 + 8 - 1-(dt/60);
//         min = 60-(dt-(dt/60)*60);
//           if (min>=10)
//         {
//             printf("%d:%d",hour,min);
//         }
//         else if (min<10)
//         {
//             printf("%d:0%d",hour,min);
//         }
//     }

//     return 0;
// }




// 太乱了哥们，我需要简化一下代码逻辑
// 以8点时刻为中界限，设置两个中间值
// 一个为需要的时间dt，一个为需要换算的时间，只需要将这个时间由分钟数转化为标准时间格式即可
# include <stdio.h>

int main()
{
    int s,v;
    scanf("%d %d",&s,&v);

    int dt,time;
    // 对dt向上取整，如果不能整除，则分钟加1
    dt = (s % v == 0) ? s/v + 10 : s/v + 10 + 1;
    // 对time以0点为界限分类讨论
    if (dt <= 8*60)
    {
        time = 8*60 - dt;
    } 
    else
    {
        time = 24*60-(dt-8*60);
    }

    // 对得到的时间分钟数进行换算
    int hour = time / 60; //整除就是取整
    int min = time % 60;  //求模就是取余

    printf("%02d:%02d\n",hour,min);
    
    return 0;
}