#include<stdio.h>
#include<string.h>
char *strcpy1(char *des, const char *scr)
{
    char *ret = des;
    while (*scr)
    {
        *(des++) = *(scr++);
    }
    *des = '\0';
    return ret;
}

char *strcat1(char *des, const char *scr)
{
    char *ret = des;
    while (*scr)
    {
        des += strlen(des);
        *(des++) = *(scr++);
    }
    *des = '\0';
    return ret;
}

int strlen1(char *des)
{
    int count = 0;
    while (*des)
    {
        des++;
        count++;
    }
    return count;
}

int strcmp1(char *s1, char *s2)
{
    while (*s1 && *s2 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int main()
{
    char s1[20] = "Hello ";
    printf("s1的有效长度:%d\n", strlen1(s1));
    printf("打印s1:%s\n", s1);

    char s2[10] = "World";
    
    strcat1(s1, s2);
    printf("打印拼接后的s1:%s\n", s1);
    
    if (strcmp1(s1, s2) > 0)
    {
        printf("较大的是s1\n");
    }
    else if (strcmp1(s1, s2) < 0)
    {
        printf("较大的是s2\n");
    }
    else
    {
        printf("两个字符串相等\n");
    }
  
    printf("打印s1: %s\n", s1);
    printf("打印s2: %s\n", s2);
    return 0;
}