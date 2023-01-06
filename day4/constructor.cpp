#include <iostream>
#include <cstring>

using namespace std;

class Student
{
    private:
        char name[4];
        int born;
        bool male;
    public:
        Student()
        {
            name[0]=0;
            born = 0;
            male = false;
            cout << "Constructor: Person()" << endl;
        }

        Student(const char * initName):born(0),male(false)
        {
            setName(initName);
            cout << "Constructor: Person(const char*)" << endl;
        }
        
        Student(const char * initName, int initBorn, bool isMale)
        {
            setName(initName);
            born = initBorn;
            male = isMale;
            cout << "Constructor: Person(const char*, int, bool)" << endl;
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
    Student yu;
    yu.printInfo();

    yu.setName("Yu");
    yu.setBorn(2000);
    yu.setGender(false);
    yu.printInfo();

    Student li("li");
    li.printInfo();

    Student xue = Student("XueQikun",1962,true);
    xue.printInfo();

    
    Student * zhou = new Student("Zhou", 1991, false);//在堆上面申请,动态申请
    zhou->printInfo();
    delete zhou;

    // // yu.born = 2001;
    // yu.printInfo();
    // // std::cout << "It's name is " << yu.name << std::endl;
    return 0;
}