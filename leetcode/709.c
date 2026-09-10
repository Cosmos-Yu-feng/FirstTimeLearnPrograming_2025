/*转换成小写字母*/
// 字母实际上是ASCII码，大小写之间相差32;

# include <stdio.h> 
# include <stdlib.h>
# include <ctype.h>
# include <string.h>

char* ToLower(char* s){
    int len = strlen(s);
    for (int i = 0; i < len; i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main(){
    char str[] = "HEKJKJ";   //字符串字面量不可作为形参直接传入，因为其是只读的，不可修改
    char* str_1 = ToLower(str);
    printf("%s",str_1);
    return 0;
}