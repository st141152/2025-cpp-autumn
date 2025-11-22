#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(int argc,char** argv) 
{
    char line[256];
    char longest[256];
    int maxLen = 0;
    if (fgets(line, sizeof(line), stdin) != NULL) 
    {
        line[strcspn(line, "\n")] = '\0';
        int start = 0, end = strlen(line) - 1;
        while (line[start] == ' ') ++start;
        while (end >= start && line[end] == ' ') --end;
        int i = start;
        while (i <= end) 
        {
            int wordStart = i;
            while (i <= end && line[i] != ' ') ++i;
            int wordLen = i - wordStart;
            if (wordLen > maxLen) 
            {
                maxLen = wordLen;
                strncpy(longest, &line[wordStart], wordLen);
                longest[wordLen] = '\0';
            }
            ++i;
        }
        printf("%s\n%d\n", longest, maxLen);
    }
    return 0;
}
