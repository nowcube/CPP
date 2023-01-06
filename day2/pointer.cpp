#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int *p1=NULL,*p2=NULL;
    p1=&num;
    p2=&num;

    *p1 = 20;
    cout << "p1=" << p1 << "num=" << num <<endl;
    *p2 = 30;
    cout << "p2=" << p2 << "num=" << num <<endl;
}