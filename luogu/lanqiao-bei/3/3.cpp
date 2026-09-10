// 总和Sum初始为0；
// 每次输入一个数据，对其进行操作如下
// 转化为字符串，对每一位上的数字进行遍历，搜寻2，0，1，9四个数字，满足一个就+=。没有就返回
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long Sum = 0;
    int n;
    cin >> n;
    for (int val = 1; val < n; val++) {
        string s = to_string(val);
        for (auto x : s)
        {
            if (x == '2' || x == '0' || x == '1' || x == '9')
            {
                Sum += val;
                break;
            }
        }
    }
    cout << Sum;
    return 0;
}