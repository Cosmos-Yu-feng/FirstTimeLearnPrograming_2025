/*在C语言中，通常把头部文件放在开头*/
// 1.头文件包含
# include <stdio.h>  // 这里是声明导入标准输入输出库，以使用printf和scanf函数

// 2.函数声明  -> 为了代码可读性，把函数声明放在主函数之前，在以下代码逻辑中再定义函数
// 声明加减乘除四个函数
// 函数声明的格式为 ->  函数返回值类型 函数名称(参数1,参数2,...) ;
float add(float a,float b);
float subtract(float a,float b);
float multiply(float a,float b);
float divide(float a,float b);

// 声明并定义主函数
// 该程序的实现逻辑，实现一个循环，用户可以多次进行计算，直到选择退出
int main(){
    
    // 声明主要逻辑变量->一个操作变量，两个操作数，一个输出结果
    char operator;
    float a,b,result;

    // 打印出输入信息
    printf("请按照以下格式输入数据：2 + 3\n");
    printf("如果你想退出,请按q或Q!\n");

    // 循环逻辑
    // 确定一个退出逻辑和报错逻辑
    while(1)
    {
        // 退出逻辑
        // 当我输入q||Q时退出,当我输入的数据不满足格式，继续下一个循环
        if (scanf("%f %c %f",&a,&operator,&b) != 3) 
        {
            // 前面的将输入的值赋给了三个变量，输入缓冲区剩余一个'\n',现在清除这个值
            while (getchar() != '\n');

            printf("如果您选择退出程序，请输入q或Q\n");
            printf("如果您想要继续程序，请任意点击除q或Q键外的任意键盘并回车\n");

            char exit_char;
            scanf("%c",&exit_char);

            if (exit_char == 'q' || exit_char == 'Q')
            {
                printf("您已退出该程序");
                break;
            }

            else
            {
                printf("您可以继续输入数据计算\n");
                while (getchar() != '\n');
                continue;
            }

            
            
            // // 检查是否要退出
            // char exit_char;
            // if (exit_char = 'q' || 'Q')
            // {
            //     printf("您选择退出程序，该程序已终止运行！！！\n");
            //     break;
            // }
            // else 
            // {
            //     printf("您输入的格式有错误，请重新输入！\n");
            //     continue;
            // }
        }
        // 在这里我还可以使用switch case 语句来写计算逻辑
        else 
        {
            if (operator == '+')
            {
                result = add(a,b);
                printf("%f %c %f = %f\n",a,operator,b,result);
            }

            else if (operator == '-')
            {
                result = subtract(a,b);
                printf("%f %c %f = %f\n",a,operator,b,result);
            }

            else if (operator == '*')
            {
                result = multiply(a,b);
                printf("%f %c %f = %f\n",a,operator,b,result);
            }

            else if (operator == '/')
            {

                if (b == 0)
                {
                    printf("您的输入有误，分子不能为零，请重试！\n");
                    continue;
                }
                
                else 
                {
                    result = divide(a,b);
                    printf("%f %c %f = %f\n",a,operator,b,result);
                }
            }
            
        }
    while (getchar() != '\n');
    }


    return 0;
}

// 四则运算函数定义
float add(float a,float b)
{
    return (a + b);
}

float subtract(float a,float b)
{
    return (a - b);
}

float multiply(float a,float b)
{
    return (a * b);
}

float divide(float a,float b)
{
    return (a / b);
}
