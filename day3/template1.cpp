#include <iostream>
using namespace std;

//模板
template<typename T>
T sum(T x,T y)
{
    cout << "The input type is "<< typeid(T).name() << endl;
    return x + y;
}

//实例化
template float sum<float>(float,float);

int main()
{
    auto val = sum(4.1, 5.2);
    cout << val <<endl;
    return 0;
}