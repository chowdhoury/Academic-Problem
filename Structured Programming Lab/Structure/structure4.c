#include<stdio.h>

struct student
{
    char name[100];
    int id;
    float cgpa;
};

int main()
{

    struct student students[10];
    for (int i = 0; i < 10; i++)
    {
       scanf("%s %d %f",&students[i].name,&students[i].id,&students[i].cgpa);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\nID: %d\nCGPA: %.2f\n", students[i].name, students[i].id, students[i].cgpa);
    }

    return 0;
}
