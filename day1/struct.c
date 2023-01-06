#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Student{
    char name[4];
    int born;
    bool male;
};

int main(){
    struct Student stu = {"Yu",2000,true};

    printf("Student %s,born in %d,gender %s\n",stu.name,stu.born,stu.male ? "male" : "female");

    struct Student student[100];
    student[50].born = 2002;

    return 0;
}