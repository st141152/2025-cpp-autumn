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
    if (n > 0) 
    {
        printf("%d", arr[0]);
    }
    for (int i = 2; i < n; i += 2) 
    {
        printf(" %d", arr[i]);
    }
    free(arr);
    return 0;
}