#ifndef lesson_H
#define lesson_H
#include <iostream>
#include <cstring>

using namespace std;

enum semester_teaching {Χειμερινό_Εξάμηνο, Εαρινό_Εξάμηνο}; //στην εκτυπωση των αποτελεσματων δεν θα υπαρχει το 0,1 αλλα το Χειμερινο Εξαμηνο, Εαρινο Εξαμηνο
class lesson
{
    private:
        string id;
        string lessons_name;
        unsigned int hours;
        semester_teaching semesterTeaching;

    public:
        lesson(string id, string lessons_name, unsigned int hours, semester_teaching semesterTeaching);
        lesson(string id, string lessons_name, unsigned int hours);
        lesson(const lesson& otherLesson);
        lesson& operator=(const lesson& other);
        ~lesson();
        string getID() const;
        void setId(string id);
        string getLessonsName() const;
        void setLessonsName(string lessons_name);
        unsigned int getHours() const;
        void setHours(unsigned int hours);
        semester_teaching getSemesterTeaching() const;
        void setSemesterTeaching(semester_teaching semesterTeaching);
        friend ostream& operator<<(ostream& out, const lesson& lesson);
        void print(ostream& out) const;
};

#endif