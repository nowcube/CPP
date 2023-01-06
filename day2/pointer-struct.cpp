#include <iostream>
#include <cstring>
using namespace std;

struct Student{
    char name[4];
    int born;
    bool male;
};

int main()
{
    Student stu = {"Yu",2000,true};
    Student *pStu = &stu;

    cout << pStu->name << endl;
    cout << pStu->born << endl;
    cout << (pStu->male ? "male":"female") << endl;
    cout << "------" << endl;

    strncpy(pStu->name,"Li",4);
    pStu->born=2004;
    (*pStu).male = false;

    cout << pStu->name << endl;
    cout << pStu->born << endl;
    cout << (pStu->male ? "male":"female") << endl;
    cout << "------" << endl;


    cout << pStu << endl;
    cout << &stu << endl;
    cout << &(pStu->name)  << endl;
    cout << &(pStu->born)  << endl;
    cout << &(pStu->male)  << endl;
    cout << sizeof(pStu)  << endl;
    cout << sizeof(double *)  << endl;
    cout << sizeof(int *)  << endl;
    cout << sizeof(char *)  << endl;

    return 0;

}