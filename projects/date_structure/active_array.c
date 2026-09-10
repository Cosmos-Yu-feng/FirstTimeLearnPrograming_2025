// 1. 空列表的大小参数为0（存在空列表，我可以在需要时请求内存，动态的改变列表大小）
// 2. 可以插入或删除列表的元素
// 3. 可以统计列表元素的个数（即列表的大小参数）
// 4. 可以读取或修改列表元素
// 5. 能够定义列表的元素类型

// 定义一个确定类型的数组，并定义一个宏作为数组的大小参数
// 定义一个结束变量指向数组末尾的索引，如果列表为空，可以初始化变量为-1
// 定义一个函数，调用时插入最后一个值,设置两个参数，参数1为插入的值，参                      数2为插入的索引，默认插入最后一位
// 定义一个函数，操作为删除对应索引的数据

# include <stdio.h>
# include <stdbool.h>

# define Max_size 10
# define Array_type int

// 定义全局数组和变量

Array_type array[Max_size];
int end = -1;

// 声明并定义插入函数
bool insert(Array_type value,int index )
{   
    // 如果插入的值超过了数组的最大界限，报错
    if (index > Max_size-1)
    {
        printf("数组已满！\n");
        return false;
    } 

    else 
    {
        // 如果插入到末尾
        if (index == end+1)
        {
            array[index] = value;
            end ++;
            printf("现在元素总数为：%d\n",end);
            printf("----------------------------------------------------------------\n");
            return true;
    
        }

        // 如果插入到数组的中间
        else if ((index > -1) && (index < end + 1))
        {
            // 将插入位置之后的数的索引往后一个单位，插入位置以前的不变，类似于复制？
            for (int i = end;i >= index;i--)
            {
                array[i+1] = array[i];
            }
            // 插入该值
            array[index] = value;
            end ++;

            printf("现在元素总数为：%d\n",end);
            printf("--------------------------------------------------------------\n");

            return true;
        }
    }
}



// 声明并定义删除数组中元素的函数
bool del(int index)
{
    // 当删除元素总数为0时，不可删除
    if (end = 0)
    {
        printf("当前数组内已无元素存在，不可删除!\n");
        return false ;
    }

    else 
    {
        if (index = end)
        {
            // 话说什么才叫删除呀，以0来代之吗，用静态变量的初始化来定义删去？
            array[index] = 0;
            return true;
        }
        else if ((index > -1)&&(index < end))
        {
            // 先删除这个位置的索引，再平移后面的变量
            array[index] = 0;
            for (int i=index;i<end;i++)
            {
                array[i] = array[i+1];
            }
            return true;
        }
    }
    
 }


// 声明并定义打印数组的函数
void array_print()
{   
    if (end == -1)
    {
        printf("该数组为空，可添加元素\n");
    }

    else
    {
        // 先检查数组大小参数
        int len = (sizeof(array))/(sizeof(Array_type));
        printf("当前数组为；\n");

        // 利用for循环遍历打印
        for (int i = 0;i <= len-1;i++)
        {
            printf("%d ",array[i]);
        }
        printf("\n");
    }
    
}



int main()
{   
    array_print();
    insert(5,0);
    array_print();
    insert(2,1);
    insert(6,2);
    array_print();
    insert(99,1);
    array_print();

    del(1);
    array_print();

    return 0;
}


