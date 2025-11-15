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
    for (int i = 0; i < n / 2; ++i) 
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    for (int i = 0; i < n; ++i) 
    {
        printf("%d", arr[i]);
        if (i < n - 1) 
        {
            printf(" ");
        }
    }
    free(arr);
    return 0;
}