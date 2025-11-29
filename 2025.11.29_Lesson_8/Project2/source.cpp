#include<stdio.h>

struct Point 
{
    double x;
    double y;
};
int main(int argc,char** argv) 
{
    int n = 0;
    scanf_s("%d", &n);
    if (n <= 0) 
    {
        return 0;
    }
    struct Point points[100];
    for (int i = 0; i < n; ++i) 
    {
        scanf_s("%lf %lf", &points[i].x, &points[i].y);
    }
    double sum_x = 0.0, sum_y = 0.0;
    for (int i = 0; i < n; ++i) 
    {
        sum_x += points[i].x;
        sum_y += points[i].y;
    }
    double center_x = sum_x / n;
    double center_y = sum_y / n;
    printf("%.15g %.15g\n", center_x, center_y);
    return 0;
}