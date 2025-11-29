#include<stdio.h>
#include<math.h>

struct Point 
{
    int x;
    int y;
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
        scanf_s("%d %d", &points[i].x, &points[i].y);
    }
    double max_distance = 0.0;
    for (int i = 0; i < n; ++i) 
    {
        for (int j = i + 1; j < n; ++j) 
        {
            int dx = points[i].x - points[j].x;
            int dy = points[i].y - points[j].y;
            double distance = sqrt(dx * dx + dy * dy);
            if (distance > max_distance) 
            {
                max_distance = distance;
            }
        }
    }
    printf("%.15g\n", max_distance);
    return 0;
}