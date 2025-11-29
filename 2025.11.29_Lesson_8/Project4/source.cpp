#include<stdio.h>
#include<math.h>

struct Point 
{
    int x;
    int y;
};
int squared_distance(struct Point a, struct Point b) 
{
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return dx * dx + dy * dy;
}
int is_triangle(struct Point a, struct Point b, struct Point c) 
{
    int area = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
    return area != 0;
}
int main(int argc,char** argv) 
{
    int n = 0;
    scanf_s("%d", &n);
    if (n < 3 || n > 100) 
    {
        return 0;
    }
    struct Point points[100];
    for (int i = 0; i < n; ++i) 
    {
        scanf_s("%d %d", &points[i].x, &points[i].y);
    }
    double max_perimeter = 0.0;
    for (int i = 0; i < n; ++i) 
    {
        for (int j = i + 1; j < n; ++j) 
        {
            for (int k = j + 1; k < n; ++k) 
            {
                if (is_triangle(points[i], points[j], points[k])) 
                {
                    int ab_sq = squared_distance(points[i], points[j]);
                    int bc_sq = squared_distance(points[j], points[k]);
                    int ca_sq = squared_distance(points[k], points[i]);
                    double perimeter = sqrt(ab_sq) + sqrt(bc_sq) + sqrt(ca_sq);
                    if (perimeter > max_perimeter) 
                    {
                        max_perimeter = perimeter;
                    }
                }
            }
        }
    }
    printf("%.15g\n", max_perimeter);
    return 0;
}