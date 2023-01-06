#include <iostream>
using namespace std;

int main()
{
    struct Student1
    {
        int id;
        bool male;
        char label;
        float height;
    };
    
    struct Student2
    {
        int id;
        bool male;
        float height;
        char label;
    };

    cout << "typeof(Student1):" << sizeof(Student1) << endl;
    cout << "typeof(Student2):" << sizeof(Student2) << endl;

    return 0;
}

