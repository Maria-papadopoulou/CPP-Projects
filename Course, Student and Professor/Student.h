#ifndef Student_h
#define Student_h

#include <string>
#include "Course.h"
#include "Professor.h"

class Student
{
    int AM;
    std::string Name;
    Course Cou;
    Professor *Prof;
public:
    void Show ();
};

#endif
