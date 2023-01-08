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
    {   
        Student yu;
        yu.printInfo();

        yu.setName("Yu");
        yu.setBorn(2000);
        yu.setGender(false);
        yu.printInfo();
    }

    Student xue = Student("XueQikun",1962,true);
    xue.printInfo();
    
    Student * zhou = new Student("Zhou", 1991, false);//在堆上面申请,动态申请
    zhou->printInfo();
    delete zhou;
    //不删除，zhou内存不释放

    return 0;
}