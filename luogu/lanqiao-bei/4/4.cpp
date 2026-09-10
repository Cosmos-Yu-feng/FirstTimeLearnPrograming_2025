# include <bits/stdc++.h>
using namespace std;

bool is_num(char c) {
    if (c >= '0' && c <= '9') {return true;}
    return false;
}

int main() {
    
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (is_num(s[i])) {
            int count = s[i] - '0';  // 字符数字转化为整型
            s.erase(i, 1);  // 删除i位置的数字
            s.insert(i, count - 1, s[i - 1]);
            i += count - 2;  
        }
    }
    cout << s;
    return 0;
}