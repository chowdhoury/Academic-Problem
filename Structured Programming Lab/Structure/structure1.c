#include<stdio.h>

struct student
    {
        char name[100];
        int id;
        double cgpa;
    };

int main()
{

    struct student s1={"Nabid",1282,3.69};

   printf("Name: %s\nID: %d\nCGPA: %.2f\n\n", s1.name,s1.id,s1.cgpa);

    return 0;
}
