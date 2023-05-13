#include <iostream>
#include <cstring>

using namespace std;

class student
{
	private:
		char* am;
		string name;
		unsigned int semester;
	public:
		student(const char* am, string name);
		student(const char* am, string name,unsigned int semester);
		student(const student& otherStudent);
		~student();
		char* getAM() const;
		string getName() const;
		unsigned int getSemester() const;
		void setAM(const char* am);
		void setName(string name);
		void setSemester(unsigned int semester);
		void print(ostream& out) const;
		student operator++(int); //semester++
        student& operator++();//++semester
        student& operator+=(unsigned int );//semester+=s
        student& operator-=(unsigned int );//semester-=s
};


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
	this->semester=1;
}

		/********************************/
		/**********constructor2*********/
		/******************************/

student::student(const char* am, string name,unsigned int semester)
{
	this->am=new char[strlen(am)+1];
	if (this->am == NULL)
	{
		cout << "Πρόβλημα στην δέσμευση μνήμης" << endl;
		exit(1);
	}
	strcpy(this->am, am);
	this->semester=semester;
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
	semester=otherStudent.semester;
}

		/********************************/
		/********destructor*************/
		/******************************/

student::~student()
{
	delete[] am;
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

unsigned int student::getSemester() const
{
	return semester;
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
void student::setSemester(unsigned int semester)
{
	this->semester=semester;
}

		/********************************/
		/**********ostream**************/
		/*******************************/

void student::print(ostream& out) const
{
	out <<"AM: "<<am<<", Name: "<<name<<", Semester: "<<semester<<endl;

}
		/********************************/
		/**********operator++************/
		/*******************************/

student student::operator++(int)
{
	student obj=*this;
	semester++;
   	 return obj;

}

		/********************************/
		/**********++operator************/
		/*******************************/

student& student::operator++()
{
	++semester;
    return *this;

}

        /********************************/
		/**********operator+=***********/
		/*******************************/

student& student::operator+=(unsigned int s)
{
	semester+=s;
    return *this;

}

        /********************************/
		/**********operator-=***********/
		/*******************************/

student& student::operator-=(unsigned int s)
{
	semester-=s;
    return *this;

}



int main(int argc, char** argv) 
{
	student s1("20390178","Maria Papadopoulou", 6);
	student s2("18390455","Eleni Theochari");
    student s3("1154210", "Thomas Nikos", 3);
	student s4(s2);


    cout<<"Ostream:"<<endl;
    cout<<" "<<endl;
	s1.print(cout);
	cout<<"**********************************************"<<endl;
    cout<<" "<<endl;

    cout<<"Ostream for student 2:"<<endl;
    cout<<" "<<endl;
	s2.print(cout);
    cout<<"***************************************************"<<endl;
    cout<<" "<<endl;

    cout<<"Getter:"<<endl;
	cout<<" "<<endl;
	cout<<"Name: "<<s1.getName()<<endl;
	cout<<"AM: "<<s1.getAM()<< endl;
	cout<<"Semester: "<<s1.getSemester()<<endl;
	cout<<"***************************************************"<<endl;
    cout<<" "<<endl;

    cout<<"Copy Constructor:"<<endl;
    cout<<" "<<endl;
	cout<<"Name: "<<s4.getName()<<endl;
	cout<<"AM: "<<s4.getAM()<< endl;
	cout<<"Semester: "<<s4.getSemester()<<endl;
    cout<<"***************************************************"<<endl;
    cout<<" "<<endl;

    cout<<"Setter of Copy Constructor:"<<endl;
	cout<<" "<<endl;
	s4.setName("Panos Theocharis");
	s4.setAM("18390456");
	s4.setSemester(2);
    s4.print(cout);

	cout<<"***************************************************"<<endl;
    cout<<" "<<endl;

    cout<<"Semester++:"<<endl;
    cout<<" "<<endl;
    s2.operator++();
    s2.print(cout);
    cout<<"**********************************************"<<endl;
    cout<<" "<<endl;

    cout<<"++Semester:"<<endl;
    cout<<" "<<endl;
    s2.operator++();
    s2.print(cout);
    cout<<"**********************************************"<<endl;
    cout<<" "<<endl;

    cout<<"Semester+=s:"<<endl;
    cout<<" "<<endl;
    s2.operator+=(2);
    s2.print(cout);
    cout<<"**********************************************"<<endl;
    cout<<" "<<endl;


    cout<<"Semester-=s:"<<endl;
    cout<<" "<<endl;
    s2.operator-=(2);
    s2.print(cout);
    cout<<"**********************************************"<<endl;
    cout<<" "<<endl;
	
	return 0;	
}
