// 学习目标:结构体数组的创建和管理，数据遍历和搜索，菜单驱动操作
# include <stdio.h>
# define MAX_FRI_COUNTS 100
# define MAX_NAME_LENYH 50
# define MAX_INDUCTION 100

// 定义挚友结构体类型
typedef struct {
    char name[MAX_NAME_LENYH];
    int meeting_time; 
    char character[MAX_INDUCTION];
    char university[MAX_NAME_LENYH];
} bosom_friends;

// 声明挚友结构体数组
bosom_friends ge_mer[MAX_FRI_COUNTS];

// 声明函数
void menu();       // 控制整体页面
void add();        // 添加人员
void display();    // 展示成员信息
void reshape();    // 修改信息


// 主函数
int main()
{
    menu();
    return 0;
}


// 定义菜单
void menu()
{
    // 设置选项变量
    int choice;

    // 使用do~while语法来执行类菜单操作
    // 依据键入的数字来进行下一步操作
    do 
    {
        printf("菜单；\n");
        printf("1.添加哥们\n");
        printf("2.搜索哥们信息\n");
        printf("3.修改哥们信息\n");
        printf("键入0,退出程序\n");

        printf("---------------------------------------------------------------------------------------\n");
        
        printf("请键入您的选择：\n");
        scanf("%d",&choice);
        while (getchar() != '\n');
        switch(choice)
        {
            case (1) : add(); break;
            case (2) : display(); break;
            case (3) : reshape(); break;
        }
    }
    while (choice != 0);    
}

// 定义添加成员的函数实现逻辑
void add()
{
    int friend_counts = 0;
    // 当成员超出最大存储人数时，报错
    if (friend_counts > MAX_FRI_COUNTS)
    {
        printf("挚友人数已满，请重试\n");
    }

    bosom_friends *f = &ge_mer[friend_counts];
    
    printf("请输入添加人员代号：\n");
    scanf("%s",f->name);
    while (getchar() != '\n');

    printf("请输入添加人员的相遇时间：\n");
    scanf("%d",&f->meeting_time);
    while (getchar() != '\n');

    printf("请输入TA的大学:\n");
    scanf("%s",&f->university);
    while (getchar() != '\n');

    printf("请输入你对TA的评价:\n");
    scanf("%s",&f->character);
    while (getchar() != '\n');
    friend_counts += 1;
}

// 定义搜索成员并展示信息的逻辑
void display()
{   
    while (1) 
    {
        int i = 0;
        char search_name[MAX_NAME_LENYH];
        printf("输入您要修改的人的代号；\n");
        scanf("%s",search_name);

        if(search_name == ge_mer[i].name)
        {
            bosom_friends *s = &ge_mer[i];
            printf("您要找的哥们信息如下：\n");
            printf("代号:%s\t相会时间:%d\t当前就读大学:%s\n",s->name,s->meeting_time,s->university);
            printf("吐槽?还是评价吧,嘿嘿...:%s\n",s->character);
            printf("------------------------------------------------------------------------------\n");
            break;
        }
        else
        {
            i += 1;
        }
    }

    // int i = 0;
    // char search_name[MAX_NAME_LENYH];
    // printf("输入您要查找的人的代号；\n");
    // scanf("%s",search_name);

    // for (i;search_name != ge_mer[i].name;i+=1)
    // {
    //     continue;
    // }
    // bosom_friends *s = &ge_mer[i];
    // printf("您要找的哥们信息如下：\n");
    // printf("代号:%s\t相会时间:%d\t当前就读大学:%s\n",s->name,s->meeting_time,s->university);
    // printf("吐槽?还是评价吧,嘿嘿...:%s",s->character);
    
}

// 定义修改数据信息的逻辑函数
void reshape()
{
    while (1) 
    {
        int i = 0;
        char search_name[MAX_NAME_LENYH];
        printf("输入您要修改的人的代号；\n");
        scanf("%s",search_name);

        if(search_name == ge_mer[i].name)
        {
            bosom_friends *s = &ge_mer[i];
            printf("您要找的哥们信息如下：\n");
            printf("代号:%s\t相会时间:%d\t当前就读大学:%s\n",s->name,s->meeting_time,s->university);
            printf("吐槽?还是评价吧,嘿嘿...:%s\n",s->character);

            printf("------------------------------------------------------------------------------\n");
                    
            scanf("%d %s %s",s->meeting_time,s->university,s->character);
            while (getchar() != '\n');

            break;
        }
        else
        {
            i += 1;
        }

    }
    
    
}



// 只能说埋了个坑吧，哈哈，调整好自己的作息，身体是革命的第一本钱，先从微积分开始，你的精力是有限的，
// 你无法精通那么多的知识，你永远无法面面俱到，你要接受自己的平凡
// 每天独自一人上下课，独自一人吃饭，独自一人消化知识，你很苦，虽然想说这样很酷，但背后的辛酸只有你自己懂得
// 从学习使用工具->知道工具背后的原理->培养创造工具思维->成为新工具的发明者
// 欸，你还在纠结于你究竟要干什么吗，你做出的每一个选择其实都不是最优解，但，每一个那么不好的选择，
// 却活生生的组成了这个独一无二的你。
// 我不想说请你加油，我知道这很苦，我知道轻飘飘地这么说话也很无耻，可是啊，在你年轻的时候呀，你就是要静下心来去深耕，你太浮躁了
// 这个时代就是一个浮躁的社会，我们都在外界的噪音下找不到自己的位置
// 欸，说的太多了，你前段时间的学习，怎么说呢，无章节的，无系统的，那不叫学习，那只叫跟着教程了解工具的用法，
// 你想学习的东西太多了，你想要的太广泛了，你静不下心

// ------> 现在开始吧，学习吧，少年，你的未来还很长，真实的你的轮廓还需要时间来拓实，不过
//         在此，我立下一个约定，未来的我应该在算法与人文的交织中找到自己的方向，请你不要迷失在算法中了
