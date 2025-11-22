#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

bool Compare(const char* S1, const char* S2) 
{
    return strcmp(S1, S2) == 0;
}
int main(int argc,char** argv) 
{
    char S1[101], S2[101];
    fgets(S1, sizeof(S1), stdin);
    fgets(S2, sizeof(S2), stdin);
    S1[strcspn(S1, "\n")] = '\0';
    S2[strcspn(S2, "\n")] = '\0';
    if (Compare(S1, S2)) 
    {
        printf("yes\n");
    }
    else 
    {
        printf("no\n");
    }
    return 0;
}
