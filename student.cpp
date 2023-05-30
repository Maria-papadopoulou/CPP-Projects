#include <iostream>
#include <cstring>
#include "student.h"
#include <vector>
#include <utility>

using namespace std;


        /********************************/
		/**********constructor1*********/
		/******************************/


student::student(const char* am, string name)
{
	this->am=new char[strlen(am)+1];
	if (this->am == NULL)
	{
		cout << "Πρόβλημα στην δέσμευση μνήμης" << endl;
		exit(1);
	}
	strcpy(this->am, am);
	this->name=name;
	this->Student_Semester=1;
}

		/********************************/
		/**********constructor2*********/
		/******************************/

student::student(const char* am, string name,unsigned int Student_Semester)
{
	this->am=new char[strlen(am)+1];
	if (this->am == NULL)
	{
		cout << "Πρόβλημα στην δέσμευση μνήμης" << endl;
		exit(1);
	}
	strcpy(this->am, am);
	this->Student_Semester=Student_Semester;
	this->name= name;		
}

        /********************************/
		/**********constructor3*********/
		/******************************/

student::student(const char* am, string name,unsigned int Student_Semester, vector<lesson*> declared_lessons)
{
    this->am=new char[strlen(am)+1];
	if (this->am == NULL)
	{
		cout << "Πρόβλημα στην δέσμευση μνήμης" << endl;
		exit(1);
	}
	strcpy(this->am, am);
	this->Student_Semester=Student_Semester;
    this->declared_lessons=declared_lessons;
	this->name= name;
}

        /********************************/
		/**********constructor4*********/
		/******************************/

student::student(const char* am, string name,unsigned int Student_Semester, vector<lesson*> declared_lessons, vector<pair<lesson*, float>> passed_lessons)
{
    this->am=new char[strlen(am)+1];
	if (this->am == NULL)
	{
		cout << "Πρόβλημα στην δέσμευση μνήμης" << endl;
		exit(1);
	}
	strcpy(this->am, am);
	this->Student_Semester=Student_Semester;
    this->declared_lessons=declared_lessons;
    this->passed_lessons=passed_lessons;
	this->name= name;
}

		/********************************/
		/********copy constructor*******/
		/******************************/

student::student(const student& otherStudent)//copy constructror
{
	am=new char[strlen(otherStudent.am)+1];
	if (this->am == NULL)
	{
		cout << "Πρόβλημα στην δέσμευση μνήμης" << endl;
		exit(1);
	}
	strcpy(am, otherStudent.am);
	name=otherStudent.name;
	Student_Semester=otherStudent.Student_Semester;
}

		/********************************/
		/********destructor*************/
		/******************************/

student::~student()
{
	if(am)
		delete[] am;
	for (int i = 0; i < declared_lessons.size(); i++) 
	{
    	declared_lessons.pop_back();
	}

}

		/********************************/
		/**********getters**************/
		/*******************************/

char* student::getAM() const
{
	return am;
}

string student::getName() const
{
	return name;			
}

unsigned int student::getStudent_Semester() const
{
	return Student_Semester;
}

vector<lesson*> student::getDeclared_lessons() const
{
	return declared_lessons;
}

vector<pair<lesson*, float>> student::getPassed_Lessons() const
{
	return passed_lessons;
}
		/********************************/
		/**********setters**************/
		/******************************/

void student::setAM(const char* am)
{
	if (this->am != NULL)
	{
		delete [] this->am;
	}
		
	this->am=new char[strlen(am)+1];

	if (this->am== NULL)
	{
		cout << "Πρόβλημα στην δέσμευση μνήμης" << endl;
		exit(1);
	}

	strcpy(this->am, am);
}
void student::setName(string name)
{
	this->name=name;
}
void student::setStudent_Semester(unsigned int Student_Semester)
{
	this->Student_Semester=Student_Semester;
}


void student::setDeclaredLessons(vector<lesson*> declared_lessons)
{
	this->declared_lessons=declared_lessons;
}

void student::setPassedLessons(vector <pair<lesson*, float>> passed_lessons)
{
	this->passed_lessons=passed_lessons;
}

		/********************************/
		/**********ostream**************/
		/*******************************/

void student::print(ostream& out) const
{
	out <<"AM: "<<am<<", Name: "<<name<<", Semester: "<<Student_Semester<<endl;
}

		/********************************/
		/**********operator++************/
		/*******************************/

student student::operator++(int)
{
	student obj=*this;
	Student_Semester++;
   	return obj;
}

		/********************************/
		/**********++operator************/
		/*******************************/

student& student::operator++()
{
	++Student_Semester;
    return *this;

}

        /********************************/
		/**********operator+=***********/
		/*******************************/

student& student::operator+=(unsigned int s)
{
	Student_Semester+=s;
    return *this;

}

        /********************************/
		/**********operator-=***********/
		/*******************************/

student& student::operator-=(unsigned int s)
{
	Student_Semester-=s;
    return *this;

}

		/********************************/
		/**********operator+=***********/
		/*******************************/

student& student::operator+=(const lesson& Lesson)
{
	declared_lessons.push_back(new lesson(Lesson));
	return *this;
}


		/********************************/
		/**********operator=************/
		/*******************************/

student& student::operator=(const student& other)
{
	if(this==&other)
	{
		am = new char[strlen(other.am+1)];
		strcpy(am, other.am);
		Student_Semester=other.Student_Semester;
   		declared_lessons=other.declared_lessons;
    	passed_lessons=other.passed_lessons;
		name=other.name;
	}
	return *this;
}


		/********************************/
		/**********operator==***********/
		/*******************************/
bool student::operator==(const student& other)
{
	return Student_Semester==other.Student_Semester;
}

		/********************************/
		/**********operator!=***********/
		/*******************************/

bool student::operator!=(const student& other)
{
	return Student_Semester!=other.Student_Semester;
}

		/********************************/
		/**********operator<***********/
		/*******************************/
bool student::operator<(const student& other)
{
	return Student_Semester<other.Student_Semester;
	
}

		/********************************/
		/**********operator<=***********/
		/*******************************/

bool student::operator<=(const student& other)
{
	return Student_Semester<=other.Student_Semester;
}
		/********************************/
		/**********operator>***********/
		/*******************************/

bool student::operator>(const student& other)
{
	return Student_Semester>other.Student_Semester;
	
}

		/********************************/
		/**********operator>=***********/
		/*******************************/

bool student::operator>=(const student& other)
{
	return Student_Semester>=other.Student_Semester;

}
//ostream
ostream& operator<<(ostream& C1, const student& S1) //C1 << S1
{
	int x=-1;
	C1 << "Αριθμός Μητρώου Φοιτητή: " << S1.getAM()  << endl;
	C1 << "Ονοματεπώνυμο Φοιτητή: "<< S1.getName() << endl;
	C1 << "Εξάμηνο Παρακολούθησης: "<< S1.getStudent_Semester() << endl;
	C1 << "\tΔηλωμένα Μαθήματα: "<< S1.declared_lessons.size() << endl;

	float average=0.0;
	float sum=0.0;
	int i;
	for(i=0; i<S1.declared_lessons.size(); i++) //δηλωμενα μαθηματα
	{
		C1<< *S1.declared_lessons[i]<<endl;
	}
		C1<<endl;
	try{
		for(i=0; i<S1.passed_lessons.size(); i++)
		{
			C1<<"\tΠερασμένα Μαθήματα: "<< S1.passed_lessons.size() <<endl;
			C1<< *S1.passed_lessons[i].first<<endl; //εμφανίζει τα μαθηματα και τον βαθμο στα περασμενα μαθηματα
			if(S1.passed_lessons[i].second<5) //αν ο βαθμος ειναι <5
			{
				sum+=0;
				throw x; //σταματαει την εκτελεση του προγραμματος
			}
			else
			{
				C1<<"Βαθμός: "<< S1.passed_lessons[i].second<<endl; //μεσος ορος
				sum+=S1.passed_lessons[i].second;
			}
			
		}
	}catch(int x) //εαν σταματησει η εκτελεση του προγραμματος
	{
		cerr<<"Λάθος Βαθμός στα περασμένα μαθήματα"<<endl;
		C1<<"Λάθος Βαθμός στα περασμένα μαθήματα"<<endl;
	}
	if(S1.passed_lessons.empty())//αν δεν εχουμε περασμενα μαθηματα
	{
		C1 << "Μέσος Όρος: "<< average << endl; //εμφανιζεται ο μεσος ορος 0.0
	}
	else //αν εχουμε περασμενα μαθηματα
	{
		average=sum/S1.passed_lessons.size();
		C1 << "Μέσος Όρος: "<< average << endl; //εμφανιζεται ο μεσος ορος
	}
	
	return C1;
}