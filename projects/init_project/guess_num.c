// 随机数生成,条件判断嵌套,循环与计数,用户交互设计

// 游戏玩法：
//  1.计算机随机生成一个1到100之间的数字作为目标数字。
//  2.玩家有最多7次机会来猜这个数字。
//  3.每次玩家输入一个猜测的数字，程序会告诉玩家猜的数字是太大了、太小了还是正确。
//  4.如果玩家在7次之内猜对了，则玩家获胜；如果7次都没猜对，则游戏失败，并公布正确答案。

# include <stdio.h>
# include <stdlib.h>  // 包含rand()和srand()函数的头文件
# include <time.h>    // 包含time()函数的头文件

// 声明两个整型数字
int target_num;
int guess_num;

// 游戏轮回次数与当前猜测次数
int guess_counts = 7;
int current_counts = 0;
int leave_counts;

// 主函数
int main()
{
    // 设置开始游戏的逻辑
    printf("游戏规则如下；\n\t您最多有%d次机会猜测这个数据,如果在次数范围内猜对，游戏胜利！\n",guess_counts);
    printf("\t(输入格式为整数:1~100)\n");

    // 生成随机种子并赋值随机数
    srand(time(NULL));
    target_num = (rand() % 100 + 1);

    // 游戏主循环
    while (1)
    {   
        // 开始或退出逻辑
        printf("-----------------------------------------------------------------------------\n");
        printf("如果您想开始游戏或继续游戏，请键入's/S'\n如果您想要结束游戏,请键入'q/Q'\n");
        char mode;
        scanf("%c",&mode);
        while (getchar() != '\n');


        // 开始及退出机制,输入格式错误机制

        if (mode == 'q' || mode == 'Q' || guess_counts == current_counts)  // 退出逻辑
        {
            printf("您已退出游戏或游戏失败，期待下次相遇，再会！！！\n谜底为:%d",target_num);
            break;
        }

        else if (mode == 's' || mode == 'S')  // 游戏开始主逻辑
        {
            // // 生成随机种子并赋值随机数
            // srand(time(NULL));
            // target_num = (rand() % 100 + 1);          我真的是，把随机种子放在循环里你能猜中就神了，诶，突然还挺佩服自己

            printf("游戏已开始，随机数据已生成，您可以键入您的猜测：\n");

            // 检查输入是否有误
            if (scanf("%d",&guess_num) != 1)
            {   
                while (getchar() != '\n');
                printf("您的输入格式错误，请重新输入:\n");
                continue;
            }

            else
            {   
                while (getchar() != '\n');
                current_counts += 1;

                if (guess_num == target_num)
                {
                    printf("游戏结束\n\t恭喜您猜中了谜底,谜底数字为%d您的猜测次数为%d\n",target_num,current_counts);
                    break;
                }

                else 
                {   
                    leave_counts = guess_counts - current_counts;

                    printf("不好意思，您猜错了，请重新键入您的猜测，您还有%d次机会\n",leave_counts);

                    if (guess_num > target_num )
                    {
                        printf("另外,您猜的值太大了！！！\n");
                    }
                    
                    else if (guess_num < target_num)
                    {
                        printf("另外，您猜测的值太小了！！！\n");
                    }

                    continue;
                }
            }
        }
       
    }
    





    return 0;
}



