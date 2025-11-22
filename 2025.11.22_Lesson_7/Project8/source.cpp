#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(int argc, char** argv)
{
	char s[256];
	if (fgets(s, sizeof(s), stdin) != NULL)
	{
		s[strcspn(s, "\n")] = '\0';
		int counts[256] = { 0 };
		for (int i = 0; s[i] != '\0'; ++i)
		{
			counts[(unsigned char)s[i]]++;
		}
		for (int i = 0; s[i] != '\0'; ++i)
		{
			if (counts[(unsigned char)s[i]] == 2)
			{
				printf("%c\n", s[i]);
				break;
			}
		}
	}
	return 0;
}

