#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    string ssnum;
    int age;

public:
    string getName()
    {
        return name;
    }

    string getSsnum()
    {
        return ssnum;
    }

    int getAge()
    {
        return age;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setSsnum(string ssnum)
    {
        this->ssnum = ssnum;
    }

    void setAge(int age)
    {
        this->age = age;
    }
};

#endif