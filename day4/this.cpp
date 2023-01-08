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

        Student(const char * name, int born, bool male)
        {
            this->name = new char[1024];
            this->setName(name);
            this->born = born;
            this->male = male;
            cout << "===========================================" << endl;
            cout << "Constructor: Person(const char*, int, bool)" << endl;
        }

        ~Student()//destructor function
        {
            cout << "To destroy object" << name <<endl;
            delete [] name;
        }

        void setName(const char * name)
        {
            strncpy(this->name,name,sizeof(name));
        }

        void setBorn(int born)
        {
            this->born = born;
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