#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

unsigned char ToUpper(unsigned char c) 
{
    if (c >= 'a' && c <= 'z') 
    {
        return c - 32;
    }
    return c;
}
int main(int argc,char** argv) 
{
    unsigned char c;
    scanf_s("%c", &c, 1);
    printf("%c\n", ToUpper(c));
    return 0;
}