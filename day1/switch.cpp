#include <iostream>
using namespace std;

int main()
{
    unsigned char input_key = 0;
    cout << "input a key" << endl;
    cin >> input_key;
    while (input_key != 'q')
    {
        switch (input_key)
        {
            case 'a':
            case 'A':
                cout << "Move left" << endl;
                break;
            case 'd':
            case 'D':
                cout << "Move right" << endl;
                break;
            default:
                cout << "Undefined key" << endl;
                break;
        }
        cin >> input_key;
    }
}