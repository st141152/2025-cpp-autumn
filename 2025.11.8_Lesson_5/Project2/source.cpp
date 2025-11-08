#include<stdio.h>
#include<stdlib.h>

int main(int argc,char** argv) 
{
    int n = 0;
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) 
    {
        scanf_s("%d", &arr[i]);
    }
    int i = 0;
    while (i < n && arr[i] % 2 != 0) 
    {
        ++i;
    }
    if (i < n) 
    {
        printf("%d", arr[i]);
        ++i;
    }
    for (; i < n; ++i) 
    {
        if (arr[i] % 2 == 0) 
        {
            printf(" %d", arr[i]);
        }
    }
    free(arr);
    return 0;
}