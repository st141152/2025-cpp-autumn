#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

bool IsPalindrome(const char* str) 
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; ++i) 
    {
        if (str[i] != str[len - 1 - i])
        {
            return false;
        }
    }
    return true;
}
int main(int main,char** argv) 
{
    char s[256];
    if (scanf("%255s", s) == 1) 
    {
        if (IsPalindrome(s)) 
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
