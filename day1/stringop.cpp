#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[] = "Hello, \0 CPP";
    char str2[] = "MOEDAY";
    char result[128];

    strcpy(result,str1);
    cout << "Result = " << +result <<endl;

    strcat(result,str2);
    cout << "Result = " << +result <<endl;
}