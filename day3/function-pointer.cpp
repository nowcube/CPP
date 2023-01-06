#include <iostream>
#include <cmath>
using namespace std;

float norm_l1(float,float);
float norm_l2(float,float);
float (*norm_ptr)(float,float);

int main()
{
    norm_ptr=norm_l1;
    cout << norm_l1(-3.1f,10.f) << endl;
    norm_ptr=&norm_l1;
    cout << (*norm_ptr)(-3.1f,10.f) << endl;
    return 0;
}

float norm_l1(float x ,float y){
    return (x)>(y) ? (x):(y);
}