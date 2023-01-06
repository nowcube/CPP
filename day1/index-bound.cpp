#include <iostream>
using namespace std;
int main()
{
    int num_arr[5];
    for (int idx = -1; idx <= 5; idx++)
    {
        num_arr[idx] = idx * idx;
        cout << "idx=" << idx << " num_arr=" << num_arr[idx] <<endl;       
    }
    
}