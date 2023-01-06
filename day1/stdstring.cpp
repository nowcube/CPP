#include <iostream>
using namespace std;

int main()
{
    std::string str1 = "hello";
    std::string str2 = "abc";
    std::string result = str1 + ',' + str2;

    cout << "result = " << result << endl;
    cout << "The lenght is " << result.length() << endl;

    return 0;
}