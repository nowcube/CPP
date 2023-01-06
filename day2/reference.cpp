#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int & num_ref = num;

    num_ref = 10;
    cout << num << endl;
    cout << num_ref << endl;

    return 0;
}