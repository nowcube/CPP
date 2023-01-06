#include <iostream>
using namespace std;

struct Student
{
    char name[4];
    int born;
    bool gender;
    float high;
};


int main()
{
    Student students[128];
    Student *p0 = &students[0];
    Student *p1 = &students[1];
    Student *p2 = &students[2];
    Student *p3 = &students[3];

    printf("p0=%p\n",p0);
    printf("p1=%p\n",p1);
    printf("p2=%p\n",p2);
    printf("p3=%p\n",p3);
    printf("p3=%d\n",sizeof(p0));

    printf("&students=%p\n",&students);
    printf("&students[0]=%p\n",&students[0]);
    printf("students=%p\n",students);

    Student * p = students;
    p[0].born = 2000;
    p[1].born = 2001;
    p[2].born = 2002;

    printf("students[0]=%d\n",students[0].born);
    printf("students[1]=%d\n",students[1].born);
    printf("students[2]=%d\n",students[2].born);

}