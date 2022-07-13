#ifndef Professor_h
#define Professor_h

#include <string>
#include "Course.h"

class Student;

class Professor
{
    std::string Name;
    Course Co;
    Student *St;
public:
    void Show ();
};

#endif
