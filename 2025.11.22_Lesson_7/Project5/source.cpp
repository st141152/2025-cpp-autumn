#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int countWords(const char* str) 
{
    int count = 1;
    int len = strlen(str);
    for (int i = 0; i < len - 1; ++i) 
    {
        if (str[i] == ' ' && str[i + 1] != ' ') 
        {
            ++count;
        }
    }
    return count;
}
int main(int argc,char** argv) 
{
    char line[256];
    if (fgets(line, sizeof(line), stdin) != NULL) 
    {
        line[strcspn(line, "\n")] = '\0';
        int words = countWords(line);
        printf("%d\n", words);
    }
    return 0;
}
