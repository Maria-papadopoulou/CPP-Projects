#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <new>

using namespace std;

 class foithths 
 {
 	private:
  char* AM;
  char* onoma;
  char* epwnymo;
 		unsigned int current_semester;
 		unsigned int perasmena;
 		float* pin_perasmenwn;
 		double *dhlwmena;
 	
  	public:
 		foithths(char* , char* , char* , unsigned int );
 		foithths(int);
		foithths(char*, char* , char* );
 		foithths (foithths &f);
 		foithths();
 		~foithths();
 		double* getdhlwmena();
 		void setdhlwmena(unsigned int current_semester);
 		char* getAM();
 		void setAM(char* AM);
 		char* getonoma();
 		void setonoma(char* onoma);
 		char* getepwnymo();
 		void setepwnymo(char* epwnymo);
 		unsigned int getcurrent_semester();
 		void setcarrent_semester(unsigned int current_semester);
 		unsigned int getperasmena();
 		void setperasmena(unsigned int perasmena);
 		float* getpin_perasmenwn();
 		void setpin_perasmenwn(int i, float dedomena);
 		void eisagwgh_bathmologias(float bath);
 		void Print(ostream &);
 		void analytikh(ostream &);	
 };
 class mathima
 {
 	private:
 		char* kwdikos;
 		char* lektiko;
 		unsigned int semester;
 	public:
 		mathima(char* , char* , unsigned int );
 		char* getkwdikos();
 		void setkwdikos(string kwdikos);
 		char*  getlektiko();
 		void setlektiko(string lektiko);
 		unsigned int getsemester();
 		void setsemester(unsigned int semester);
 		void Print_mathima(ostream &);
 	public:
 		
 			mathima();
		    void operator+= (float* );
			mathima operator= (const mathima &);
			mathima operator== (const mathima &);
			mathima operator!= (const mathima &);
			mathima operator < (const mathima&);
			mathima operator <= (const mathima&);
			mathima  operator > (const mathima&);
			mathima operator >= (const mathima&);
		   	~mathima();
 			
 };
 foithths::foithths(char* A,char* on,char* ep, unsigned int sem)
{
	AM=A;
 	onoma=on;
 	epwnymo=ep;
	AM=new char [strlen(A)+1];
	strcpy(AM, A);
	onoma=new char[strlen(on)+1];
	strcpy(onoma, on);
	epwnymo=new char[strlen(ep)+1];
	strcpy(epwnymo, ep);
	current_semester=sem;	
}
  foithths::foithths(char* A, char *on, char *ep)
{
	onoma=new char[strlen(on)+1];
	strcpy(onoma, on);
	epwnymo=new char[strlen(ep)+1];
	strcpy(epwnymo, ep);
	AM=A;	
}
foithths::foithths()
{
	dhlwmena = new (nothrow) double [5];
    if (dhlwmena == NULL)
        throw (1);
	dhlwmena[0] = 0;
}
 
foithths::foithths(int per)
{
	int i;
	for(i=1; i<per; i++)
		per+=1;

}

 char* foithths::getAM()
 {
 	return AM;
 }
 char* foithths::getonoma()
{
 	return onoma;
}
char* foithths::getepwnymo()
{
 	return epwnymo;
}
unsigned int foithths::getcurrent_semester()
{
	return current_semester;
}
 unsigned int foithths::getperasmena()
{
	return perasmena;
}
float* foithths::getpin_perasmenwn()
{
	return pin_perasmenwn;
}
foithths::~foithths()
{
	delete[] onoma;
	delete[] epwnymo;
}
mathima::mathima(char* kwd, char* lek, unsigned int sem )
{
	kwdikos=kwd;
	lektiko=lek;
	semester=sem;
	kwdikos=new char [strlen(kwd)+1];
	strcpy(kwdikos, kwd);
	lektiko=new char[strlen(lek)+1];
	strcpy(lektiko, lek);
	semester=sem;

}
char* mathima::getkwdikos()
{
	return kwdikos;
}
char* mathima::getlektiko()
{
	return lektiko;
}
unsigned int mathima::getsemester()
{
	return semester;
}

void mathima::Print_mathima(ostream &out)
{
	out<<"\nΣτοιχεία Μαθήματος\n"<<endl;
	out << "Κωδικός Μαθήματος: " <<kwdikos << endl;
    out << "Λεκτικό Μαθήματος: " << lektiko << endl;
    out << "Εξάμηνο: " <<semester<< endl;
    out<<"==================================================="<<endl;
}
mathima::~mathima()
{
	delete[] kwdikos;
	delete[] lektiko;
}
void foithths::Print(ostream &out) 
{
	out<<"\nΣτοιχεία Φοιτητή\n"<<endl;
	out << "Αριθμός Μητρώου: " << AM << endl;
    out << "Όνομα: " << onoma << endl;
    out << "Επώνυμο: " << epwnymo << endl;
    out << "Τρέχον Εξάμηνο: " <<current_semester<< endl;
    out<<"==================================================="<<endl;
}
void foithths::analytikh(ostream &out)
{
	out<<"\nAναλυτική Βαθμολογία\n"<<endl;
    out << "Μάθημα 1.............: " << perasmena << endl;
    out << "Mάθημα 2.............: " << perasmena << endl;
    out << "Μάθημα 3.............: " << perasmena << endl;
    out<< 	"Μ.Ο..................: " << perasmena/3<< endl;
    out<<"===================================================\n"<<endl;	
}
int main(int argc, char** argv)
{
	system("chcp 1253");
	foithths *f1 = new foithths ("20390178", "Μαρία", "Παπαδοπούλου",2);
	foithths *f2 = new foithths ("16390188", "Νίκος", "Νικολάου",5);
   foithths *f3 = new foithths (3);
	f1->Print(cout);
	f2->Print(cout);
	f3->analytikh(cout);
	   mathima *m1=new mathima ("1001", "Μαθημετική Ανάλυση Ι", 1);
	   mathima *m2=new mathima ("2004", "Αντικειμενοστραφής Προγραμματισμός", 2);
	   mathima *m3=new mathima ("3005", "Μικροηλεκτρονική", 6);
			m1->Print_mathima(cout);
			m2->Print_mathima(cout);
			m3->Print_mathima(cout);
}
