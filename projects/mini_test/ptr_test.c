# include <stdio.h>
# define MAX_SIZE 100

// 声明全局变量
int type_lenth[MAX_SIZE];



int main()
{   
    // int a = sizeof(int);
    // int b = sizeof(float);
    // int c = sizeof(double);
    // int d = sizeof(long);
    // int e = sizeof(short);
    // printf("短整型：%d\n",e);
    // printf("长整型：%d\n",d);
    // printf("整型：%d\n",a);
    // printf("单精度浮点型型：%d\n",b);
    // printf("双精度浮点型：%d\n",c);

    int a = sizeof(int*);
    int b = sizeof(float*);
    int c = sizeof(double*);
    int d = sizeof(long*);
    int e = sizeof(short*);
    printf("短整型：%d\n",e);
    printf("长整型：%d\n",d);
    printf("整型：%d\n",a);
    printf("单精度浮点型型：%d\n",b);
    printf("双精度浮点型：%d\n",c);
    
    
    

    return 0;
}