#include <iostream>
#include <cstring>
#include "lesson.h"

using namespace std;

//constructor
lesson::lesson(string id, string lessons_name, unsigned int hours, semester_teaching semesterTeaching)
{
    this->id=id;
    this->lessons_name=lessons_name;
    this->hours=hours;
    this->semesterTeaching=semesterTeaching;
}

lesson::lesson(string id, string lessons_name, unsigned int hours)
{
    this->id=id;
    this->lessons_name=lessons_name;
    this->hours=hours;
}

//copy constructror
lesson::lesson(const lesson& otherLesson)
{
	id=otherLesson.id;
	lessons_name=otherLesson.lessons_name;
    hours=otherLesson.hours;
    semesterTeaching=otherLesson.semesterTeaching;
}

lesson& lesson::operator=(const lesson& other) //copy constructor με =
{
	if(this==&other)
	{
		id=other.id;
	    lessons_name=other.lessons_name;
        hours=other.hours;
        semesterTeaching=other.semesterTeaching;
    }
    return *this;
}

//destructor
lesson::~lesson()
{
    
}

//getters, setters για id
string lesson::getID() const
{
    return id;

}

void lesson::setId(string id)
{
    this->id=id;
}

//getters, setters για ονομα μαθηματος

string lesson::getLessonsName() const
{
    return lessons_name;

}

void lesson::setLessonsName(string lessons_name)
{
    this->lessons_name=lessons_name;
}

//getters, setters για ωρες μαθηματος

unsigned int lesson::getHours() const
{
    return hours;

}

void lesson::setHours(unsigned int hours)
{
    this->hours=hours;
}

//getters, setters για εξαμηνο διδασκαλιας

semester_teaching lesson::getSemesterTeaching() const
{
    return semesterTeaching;

}

void lesson::setSemesterTeaching(semester_teaching semesterTeaching)
{
    this->semesterTeaching=semesterTeaching;
}

//operator<<
ostream& operator<<(ostream& out, const lesson& lesson)
{
    out <<"Κωδικός Μαθήματος: "<< lesson.id <<endl; 
    out <<"Λεκτικό Μαθήματος: "<< lesson.lessons_name <<endl; 
    out <<"Ώρες/βδομάδα: "<< lesson.hours <<endl;
    if(lesson.semesterTeaching==0) 
        out <<"Εξάμηνο Διδασκαλίας: Χειμερινό Εξάμηνο ";
    else
        out <<"Εξάμηνο Διδασκαλίας: Εαρινό Εξάμηνο ";
    return out;
}

//print
void lesson::print(ostream& out) const
{
    if(semesterTeaching==0)
    {
        out <<"Κωδικός Μαθήματος: "<<id<<endl;
        out <<"Λεκτικό Μαθήματος: "<<lessons_name<<endl;
        out<<"Ώρες/βδομάδα: "<<hours<<endl;
        out<<"Εξάμηνο Διδασκαλίας: Χειμερινό Εξάμηνο"<<endl;
    }
      
    else
    {
        out <<"Κωδικός Μαθήματος: "<<id<<endl;
        out <<"Λεκτικό Μαθήματος: "<<lessons_name<<endl;
        out<<"Ώρες/βδομάδα: "<<hours<<endl;
        out<<"Εξάμηνο Διδασκαλίας: Εαρινό Εξάμηνο"<<endl;

    }
}
