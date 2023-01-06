#pragma once

#include <cstring>
class Student
{
    private:
        char name[4];
        int born;
        bool male;
    public:
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