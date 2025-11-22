#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

bool IsDigit(unsigned char c) 
{
    return isdigit(c) != 0;
}
int main(int argc,char** argv) 
{
    unsigned char c;
    scanf_s("%c", &c, 1);
    if (IsDigit(c)) 
{
        printf("yes\n");
    }
    else {
        printf("no\n");
    }
    return 0;
}




