#include <iostream>
#include <cstring>

using namespace std;

class Student
{
    private:
        char * name;
        int born;
        bool male;
    public:
        Student()
        {
            name = new char[1024]{0};
            born = 0;
            male = false;
            cout << "=====================" << endl;
            cout << "Constructor: Person()" << endl;
        }

        Student(const char * initName, int initBorn, bool isMale)
        {
            name = new char[1024];
            setName(initName);
            born = initBorn;
            male = isMale;
            cout << "===========================================" << endl;
            cout << "Constructor: Person(const char*, int, bool)" << endl;
        }

        ~Student()//destructor function
        {
            cout << "To destroy object" << name <<endl;
            delete [] name;
        }

        void setName(const char * s)
        {
            strncpy(name,s,sizeof(name));
        }

        void setBorn(int b)
        {
            born = b;
        }

        void setGender(bool isMale);
        void printInfo();
};

void Student::setGender(bool isMale)
{
    male = isMale;
}

void Student::printInfo()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Born in: " << born << std::endl;
    std::cout << "Gender: " << (male ? "Male" : "Female") << std::endl;
}

int main()
{
    Student * class1 = new Student[3]{
        {"Tom",2000,true},
        {"Bob",2001,true},
        {"Alice",2002,false},
    };

    class1[1].printInfo();
    // delete class1;
    delete[] class1;

    return 0;
}