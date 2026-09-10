#include<stdio.h>
#define Max(a, b) ((a)>=(b)?(a):(b))
int main()
{
    int t;  // 测试数据组数t
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, m;
        char s[100001] = {'0'};
        scanf("%d %d %s", &n, &m, s);

        int zero_max = n;   // 可以满足的0的最大个数
        int s_zero = -1;    // 字符串中的0的最多数
        int cur_zero = 0;
        for (int j = 0; s[j]; j++)
        {
            if (s[j] == '0')
            {
                cur_zero++;
            }
            else if (s[j] == '1')
            {
                s_zero = Max(cur_zero, s_zero);
                cur_zero = 0;
            }
        }

        if (zero_max >= s_zero)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}