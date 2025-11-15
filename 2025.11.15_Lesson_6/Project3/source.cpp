#include<stdio.h>

bool Election(bool x, bool y, bool z);

int main(int argc, char** argv)
{
    int x = 0;
    int y = 0;
    int z = 0;
    scanf_s("%d %d %d", &x, &y, &z);
    bool x_bool = (x == 1);
    bool y_bool = (y == 1);
    bool z_bool = (z == 1);
    bool result = Election(x_bool, y_bool, z_bool);
    if (result == true)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}
bool Election(bool x, bool y, bool z)
{
    int count_true = 0;
    int count_false = 0;
    if (x == true)
    {
        count_true = count_true + 1;
    }
    else
    {
        count_false = count_false + 1;
    }

    if (y == true)
    {
        count_true = count_true + 1;
    }
    else
    {
        count_false = count_false + 1;
    }

    if (z == true)
    {
        count_true = count_true + 1;
    }
    else
    {
        count_false = count_false + 1;
    }

    if (count_true > count_false)
    {
        return true;
    }
    else
    {
        return false;
    }
}