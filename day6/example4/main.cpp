#include <iostream>
#include "time.hpp"

using namespace std;

int main()
{
    // MyTime t1(1, 20);
    // // int minutes = t1;
    // float f = t1;
    // // std::cout << "minutes = " << minutes << std::endl;
    // std::cout << "minutes = " << f << std::endl;

    // MyTime t2 = 70;
    // std::cout << "t2 is " << t2 << std::endl;

    // MyTime t3;
    // t3 = 80;
    // std::cout << t3 ; 

    // std::cout << (t1 + 30).getTime() << std::endl;
    // std::cout << (30 + t1).getTime() << std::endl;

    // t1 += 30;
    MyTime t1(1,10);
    MyTime t2(2,25);
    t1.operator+=(t2);

    std::cout << t1.getTime() << std::endl;
    std::cout << t2.getTime() << std::endl;

    // std::cout << (t1 + "one hour").getTime() << endl;
    // std::cout << (t1 + "two hour").getTime() << endl;

    // std::cout << t1 << std::endl;
    // std::cout << "Please input two intgers:" << std::endl;
    // std::cin >> t1;
    // std::cout << t1 << std::endl;

    // MyTime t1(1,59);
    // MyTime t2 = t1++;
    // MyTime t3 = ++t1;
    // std::cout << t1 << std::endl;
    // std::cout << t2 << std::endl;
    // std::cout << t3 << std::endl;


    return 0;
}
