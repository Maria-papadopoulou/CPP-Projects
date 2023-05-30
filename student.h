#ifndef student_H
#define student_H
#include <iostream>
#include <cstring>
#include <vector>
#include "lesson.h"
#include <utility>


using namespace std;

class student
{
	private:
		char* am;
		string name;
		unsigned int Student_Semester;
        vector<lesson*> declared_lessons; //Τα δηλωμένα μαθήματα του τρέχοντος εξαμήνου και
        vector<pair<lesson*, float>> passed_lessons;//οι βαθμοί των επιτυχώς ολοκληρωμένων μαθημάτων προηγούμενων εξαμήνων
	public:
		student(const char* am, string name);
		student(const char* am, string name,unsigned int Student_Semester);
        student(const char* am, string name,unsigned int Student_Semester, vector<lesson*> declared_lessons);
        student(const char* am, string name,unsigned int Student_Semester, vector<lesson*> declared_lessons, vector<pair<lesson*, float>> passed_lessons);
		student(const student& otherStudent);
		~student();
		char* getAM() const;
		string getName() const;
		unsigned int getStudent_Semester() const;
        vector<lesson*> getDeclared_lessons() const;
        vector<pair<lesson*, float>> getPassed_Lessons() const;
		void setAM(const char* am);
		void setName(string name);
		void setStudent_Semester(unsigned int Student_Semester);
        void setDeclaredLessons(vector<lesson*> declared_lessons);
        void setPassedLessons(vector <pair<lesson*, float>> passed_lessons);
		void print(ostream& out) const;
		friend ostream& operator<<(ostream& C1, const student& S1);
		student operator++(int); //Student_Semester++
        student& operator++();//++Student_Semester
        student& operator+=(unsigned int );//Student_Semester+=s
        student& operator-=(unsigned int );//Student_Semester-=s
        student& operator+=(const lesson& lesson);//προσθηκη μαθηματος σε δηλωμενα
        student& operator=(const student& other); //σαν copy constructor, απλα με =
		bool operator==(const student& other); //συγκριση εξαμηνων και επιστρεφεται 0 ή 1(bool)
    	bool operator!=(const student& other); //συγκριση εξαμηνων και επιστρεφεται 0 ή 1(bool)
    	bool operator<(const student& other);  //συγκριση εξαμηνων και επιστρεφεται 0 ή 1(bool)
    	bool operator<=(const student& other);  //συγκριση εξαμηνων και επιστρεφεται 0 ή 1(bool)
    	bool operator>(const student& other);  //συγκριση εξαμηνων και επιστρεφεται 0 ή 1(bool)
    	bool operator>=(const student& other); //συγκριση εξαμηνων και επιστρεφεται 0 ή 1(bool)
		
};
#endif