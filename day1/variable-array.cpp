#include <iostream>
using namespace std;

int main()
{
    int len = 1;
    while (len < 10)
    {
        int num_arr2[len];
        cout << "len=" << len;
        cout << ",sizeof(num_arr2) = " << sizeof(num_arr2) << endl;
        len++;
    }
    
}