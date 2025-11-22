#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

unsigned char ChangeCase(unsigned char c) 
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 32;
    }
    else if (c >= 'A' && c <= 'Z') 
    {
        return c + 32;
    }
    return c;
}
int main(int argc, char** argv) 
{
    unsigned char c;
    scanf_s("%c", &c, 1);
    printf("%c\n", ChangeCase(c));
    return 0;
}