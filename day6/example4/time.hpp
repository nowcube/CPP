#pragma once
#include <iostream>

class MyTime
{
    int hours;
    int minutes;

public:
    MyTime() : hours(0), minutes(0)
    {
        std::cout << "Constructor MyTime()" << std::endl;
    }

    MyTime(int m) : hours(0), minutes(m)
    {
        std::cout << "Constructor MyTime(int)" << std::endl;
        this->hours += this->minutes / 60;
        this->minutes %= 60;
    }

    MyTime(int h, int m) : hours(h), minutes(m)
    {
        std::cout << "Constructor MyTime(int,int) " << std::endl;
    }

    // implicit conversion
    //  operator int() const
    //  {
    //      std::cout << "operator int()" << std::endl;
    //      return this->hours * 60 + this->minutes;
    //  }

    // explicit conversion
    explicit operator float() const
    {
        std::cout << "explicit operator float()" << std::endl;
        return float(this->hours * 60 + this->minutes);
    }

    MyTime operator+(const MyTime &t) const
    {
        MyTime sum;
        sum.minutes = this->minutes + t.minutes;
        sum.hours = this->hours + t.hours;

        sum.hours += sum.minutes / 60;
        sum.minutes %= 60;

        return sum;
    }

    MyTime &operator+=(const MyTime &t)
    {
        this->minutes += t.minutes;
        this->hours += t.hours;

        this->hours += this->minutes / 60;
        this->minutes %= 60;

        return *this;
    }

    MyTime operator+(int m) const
    {
        MyTime sum;
        sum.minutes = this->minutes + m;
        sum.hours = this->hours;

        sum.hours += sum.minutes / 60;
        sum.minutes %= 60;

        return sum;
    }

    MyTime & operator+=(int m)
    {
        this->minutes += m;
        this->hours += this->minutes / 60;
        this->minutes %= 60;
        return *this;
    }

    MyTime &operator++()
    {
        this->minutes++;
        this->hours += this->minutes / 60;
        this->minutes = this->minutes % 60;
        return *this;
    }

    MyTime operator++(int) // pass by value
    {
        MyTime old = *this;
        operator++();
        return old;
    }

    MyTime operator+(const std::string str) const
    {
        MyTime sum = *this;
        if (str == "one hour")
            sum.hours = this->hours + 1;
        else
            std::cerr << "Onle \"one hour\" is supported." << std::endl;
        return sum;
    }

    friend MyTime operator+(int m, const MyTime &t) // 友员函数 ，并不是成员函数
    {
        return t + m;
    }

    std::string getTime() const
    {
        return std::to_string(this->hours) + " hours and " + std::to_string(this->minutes) + " minutes.";
    }

    friend std::ostream &operator<<(std::ostream &os, const MyTime &t)
    {
        std::string str = std::to_string(t.hours) + " hours and " + std::to_string(t.minutes) + " minutes.";
        os << str;
        return os;
    }

    friend std::istream &operator>>(std::istream &is, MyTime &t)
    {
        is >> t.hours >> t.minutes;
        t.hours += t.minutes / 60;
        t.minutes %= 60;
        return is;
    }
};
