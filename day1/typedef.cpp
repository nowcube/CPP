#include <iostream>
using namespace std;

int main()
{
    typedef int myint;
    typedef unsigned char vec3b[3];
    typedef struct _rgb_struct{
        unsigned char r;
        unsigned char g;
        unsigned char b;
    } rgb_struct;

    myint num = 32;

    unsigned char color[3];
    vec3b color = {255,0,255};

    rgb_struct rgb = {0,255,128};


}