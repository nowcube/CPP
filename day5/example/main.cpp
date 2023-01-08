#include <iostream>
#include "time.hpp"

using namespace std;

int main()
{
    MyTime t1(2, 40);
    // std::cout << (t1 + 30).getTime() << std::endl;
    std::cout << (30 + t1).getTime() << std::endl;

    // t1 += 30;
    // t1.operator+=(30);

    // std::cout << t1.getTime() << endl;

    // std::cout << (t1 + "one hour").getTime() << endl;
    // std::cout << (t1 + "two hour").getTime() << endl;

    std::cout << t1 << std::endl;
    std::cout << "Please input two intgers:" << std::endl;
    std::cin >> t1;
    std::cout << t1 << std::endl;

    return 0;
}
