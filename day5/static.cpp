#include <iostream>
#include <cstring>

using namespace std;

class Student
{
    private:
        // static size_t student_total; //declaration only
        inline static size_t student_total = 0; //c++17
        //staitc members are not bound to class instances

    public:
        Student()
        {
            student_total++;
        }
        ~Student()
        {
            student_total--;
        }
        static size_t getTotal()
        {
            return student_total;
        }
};

//definition it here
//size_t Student::student_total = 0;

int main()
{
    cout << "student_total " << Student::getTotal() << endl; //并没有对象，但是可以调用
    Student * c1 = new Student[3]{};
    cout << "student_total " << Student::getTotal() << endl;
    Student yu;
    cout << "student_total " << Student::getTotal() << endl;

    return 0;

}