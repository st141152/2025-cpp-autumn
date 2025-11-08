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
    for (int i = 1; i < n; ++i) 
    {
        if ((arr[i] > 0 && arr[i - 1] > 0) || (arr[i] < 0 && arr[i - 1] < 0)) 
        {
            printf("YES");
            free(arr);
            return 0;
        }
    }
    printf("NO");
    free(arr);
    return 0;
}