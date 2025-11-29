#include<stdio.h>

struct Point 
{
    int x;
    int y;
};
int main(int argv,char** argc) 
{
    int n = 0;
    scanf_s("%d", &n);
    if (n <= 0 || n > 100) 
    {
        return 0;
    }
    struct Point points[100];
    for (int i = 0; i < n; ++i) 
    {
        scanf_s("%d %d", &points[i].x, &points[i].y);
    }
    int maxDistanceSquared = points[0].x * points[0].x + points[0].y * points[0].y;
    struct Point farthestPoint = points[0];
    for (int i = 1; i < n; ++i) 
    {
        int distanceSquared = points[i].x * points[i].x + points[i].y * points[i].y;
        if (distanceSquared > maxDistanceSquared) 
        {
            maxDistanceSquared = distanceSquared;
            farthestPoint = points[i];
        }
    }
    printf("%d %d\n", farthestPoint.x, farthestPoint.y);
    return 0;
}