# include <stdio.h>
// # include <string.h>

// int main(){
//     char lowercase;
//     scanf("%c",&lowercase);

//     // strupr()这个函数是直接在原地址上修改，所以我可以不用变量来接受返回的指针
//     strupr(&lowercase);    
//     printf("%c",lowercase);
//     return 0;
// }

// 可惜了，strupr不是标准库里面的函数

int  main(){
    char lowercase;
    scanf("%c",&lowercase);
    lowercase = lowercase -32;
    printf("%c",lowercase);
    return 0;
}