#include<stdio.h>

struct Student
{
    char surname[50];
    char name[50];
    int math;
    int physics;
    int info;
};
int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);
    struct Student students[100];
    double sum_math = 0, sum_physics = 0, sum_info = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%s", students[i].surname, 50);
        scanf_s("%s", students[i].name, 50);
        scanf_s("%d", &students[i].math);
        scanf_s("%d", &students[i].physics);
        scanf_s("%d", &students[i].info);

        sum_math += students[i].math;
        sum_physics += students[i].physics;
        sum_info += students[i].info;
    }
    printf("%g %g %g\n", sum_math / n, sum_physics / n, sum_info / n);
    return 0;
}