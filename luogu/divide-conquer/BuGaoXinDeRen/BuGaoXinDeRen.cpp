/*
在遍历数组的过程中更新值，嗯。。。。可以分段判断
*/

# include <iostream>
int main()
{
    int ans = 0, sum = 0, sum_cur = 0;
    for (int i = 1; i < 8; i++)
    {
        int t1,t2;
        std::cin >> t1 >> t2;
        if (t1 + t2 > 8)
        {
            sum_cur = t1 + t2;
            if (sum_cur > sum)
            {
                sum = sum_cur;
                ans = i;
            }
        }
    }
    std::cout << ans << std::endl;
}


/*
可以逐行的赋值操作，以每一个小的结构单元为一个操作对象，而不是把整体数据全部记录之后，
再相应地遍历操作。
因为我关注的结果会随着发生变化，而是否变化则取决于每次输入的值
*/