/*
买n支铅笔，有三种方式
*/

# include <iostream>
# include <algorithm>
# include <cmath>
# include <climits>
int main()
{
    int N, ans = INT_MAX, cur = 0;
     std::cin >> N;
    for (int i = 0; i < 3; i++)
    {
        int n, m;
        std::cin >> n >> m;
        cur = (int)(ceil(1.0 * N / n) * m);
        ans = std::min(cur, ans);
    }
    std::cout << ans << std::endl;
}