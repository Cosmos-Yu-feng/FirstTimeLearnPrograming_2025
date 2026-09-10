#include <bits/stdc++.h>
using namespace std;
// 数据结构以动态数组来存储输入
// 对数组排序
// 判断条件：1.遍历得到前后两个元素相同则为重复元素
//           2.前后两个元素相减为2则为空缺，返回前一个值+1即可
int main()
{
    vector<int> arr;
    int N, x;
    cin >> N;
    while (cin >> x)
    {arr.push_back(x);}

    sort(arr.begin(), arr.end());
    
    int ans1, ans2;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {ans1 = arr[i];}
        if (arr[i + 1] - arr[i] == 2)
        {ans2 = arr[i] + 1;}
    }

    cout << ans2 << " " << ans1;
    return 0; 
}