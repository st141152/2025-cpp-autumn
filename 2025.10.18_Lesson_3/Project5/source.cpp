#include<cstdio> 

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;

    do
    {
        scanf_s("%d", &a);

        if (a == 0)
        {
            break;
        }

        if (a > b)
        {
            c = b;
            b = a;
        }

        else if (a > c)
        {
            c = a;
        }
    } while (1);

    printf("%d", c);
    return 0;
}