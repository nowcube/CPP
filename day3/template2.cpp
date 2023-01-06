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
// template float sum<float>(float,float);

int main()
{
    //隐式实例化
    //Implicitly instantiates product<int>(int,int)
    cout << "sum = " << sum<int>(2.2f,3.0f) << endl;
    //Implicitly instantiates product<float>(float,float)
    cout << "sum = " << sum(2.2f,3.0f) << endl;


    // auto val = sum(4.1, 5.2);
    // cout << val <<endl;
    return 0;
}