#include <iostream>
#include <cstring>
#include <fstream>
#include "lesson.h"
#include "student.h"

using namespace std;

int main(int argc, char** argv) 
{
    //lesson
    lesson l1 ("ICE-1006", "Φυσική",4, Χειμερινό_Εξάμηνο);
    lesson l2 ("ICE-2004", "Αντικειμενοστρεφής Προγραμματισμός",6, Εαρινό_Εξάμηνο);
    lesson l3 ("ICE-3006", "Αρχιτεκτονική Υπολογιστών",5, Χειμερινό_Εξάμηνο);
    lesson l4 ("ICE-5005", "Ψηφιακή Επεξεργασία Σήματος",4, Εαρινό_Εξάμηνο);
    lesson l5(l3);
    lesson l6=l1;
    lesson l7 ("ICE-4002", "Δίκτυα Υπολογιστών 2", 4,Εαρινό_Εξάμηνο);
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tΚΑΤΑΛΟΓΟΣ ΜΑΘΗΜΑΤΩΝ"<<endl;
    cout<<"-----------------------------------------------------------------------------"<<endl;
    cout<<"Μαθήμα 1:"<<endl;
    cout<<" "<<endl;
	l1.print(cout); //εκτυπωση δεδομενων για μαθημα 1
    cout<<" "<<endl;
    cout<<"Μαθήμα 2:"<<endl;
    cout<<" "<<endl;
	l2.print(cout); //εκτυπωση δεδομενων για μαθημα 2

    cout<<" "<<endl;
    cout<<"Μαθήμα 3:"<<endl;
    cout<<" "<<endl;
	l3.print(cout); //εκτυπωση δεδομενων για μαθημα 3
	
    cout<<" "<<endl;
    cout<<"Μαθήμα 4:"<<endl;
    cout<<" "<<endl;
	l4.print(cout); //εκτυπωση δεδομενων για μαθημα 4
	
    cout<<" "<<endl;
    cout<<"Αντίγραφο Μαθήματος 3:"<<endl;
    cout<<" "<<endl;
	l5.print(cout); //εκτυπωση δεδομενων για μαθημα 5
	
    cout<<" "<<endl;
    cout<<"Αντίγραφο Μαθήματος 1:"<<endl;
    cout<<" "<<endl;
	l6.print(cout); //εκτυπωση δεδομενων για μαθημα 6
	
    cout<<" "<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tOSTREAM ΜΑΘΗΜΑΤΩΝ"<<endl;
    cout<<"-----------------------------------------------------------------------------"<<endl;
    cout<<" "<<endl;
	l1.print(cout); //εκτυπωση δεδομενων για μαθημα 1
	
    cout<<" "<<endl;

    cout<<"Μάθημα 2:"<<endl;
    cout<<" "<<endl;
	l2.print(cout); //εκτυπωση δεδομενων για μαθημα 2
    cout<<" "<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tGETTER ΜΑΘΗΜΑΤΩΝ"<<endl;
    cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<" "<<endl;
	cout<<"Κωδικός Μαθήματος: "<<l1.getID()<<endl; //χρησιμοποιουμε getter για κωδικο μαθηματος
    cout<<"Λεκτικό Μαθήματος: "<<l1.getLessonsName()<<endl; //χρησιμοποιουμε getter για το ονομα του μαθηματος
	cout<<"Ώρες/βδομάδα: "<<l1.getHours()<< endl; //χρησιμοποιουμε getter για τις ωρες/βδομαδα

    if(l1.getSemesterTeaching()==0) //εαν το εξαμηνο διδασκαλιας ειναι 0
        cout<<"Εξάμηνο Διδασκαλίας: Χειμερινό Εξάμηνο " <<endl; //εκτυπωσε πως το μαθημα βρισκεται στο χειμερινο εξαμηνο
    else //if(l1.getSemesterTeaching()==1)
        cout<<"Εξάμηνο Διδασκαλίας: Εαρινό Εξάμηνο " <<endl; //εκτυπωσε πως το μαθημα βρισκεται στο εαρινό εξαμηνο

    cout<<" "<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tCOPY CONSTRUCTOR ΜΑΘΗΜΑΤΩΝ"<<endl;
    cout<<"-----------------------------------------------------------------------------"<<endl;
    cout<<" "<<endl;
	cout<<"Λεκτικό Μαθήματος: "<<l4.getLessonsName()<<endl; //χρησιμοποιουμε getter για το ονομα του μαθηματος
	cout<<"Κωδικός Μαθήματος: "<<l4.getID()<< endl; //χρησιμοποιουμε getter για κωδικο μαθηματος
	cout<<"Εξάμηνο Διδασκαλίας: "<<l4.getSemesterTeaching()<<endl; //χρησιμοποιουμε getter για το εξαμηνο διδασκαλιας του μαθηματος

    cout<<" "<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"\t\tSETTER / COPY CONSTRUCTOR ΜΙΚΡΟΗΛΕΚΤΡΟΝΙΚΗΣ(ΜΑΘΗΜΑ 4)"<<endl;
    cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<" "<<endl;
	l4.setLessonsName("Μικροηλεκτρονική"); //χρησιμοποιούμε setter για να αλλαξουμε το ονομα του Μαθηματος 4
	l4.setId("ICE-6004"); //χρησιμοποιούμε setter για να αλλαξουμε το ονομα του Μαθηματος 4
	l4.setSemesterTeaching(Εαρινό_Εξάμηνο); //χρησιμοποιούμε setter για να αλλαξουμε το ονομα του Μαθηματος 4
    l4.print(cout);//χρησιμοποιούμε setter για να αλλαξουμε το ονομα του Μαθηματος 4
    cout<<" "<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tOPERATOS '=' ΓΙΑ ΜΑΘΗΜΑ2=ΜΑΘΗΜΑ1"<<endl;
    cout<<"-----------------------------------------------------------------------------"<<endl;
    cout<<"Lesson="<<endl;
    cout<<" "<<endl;
    l2=l1; //χρησιμοποιουμε το operator =, αντι για copy constructor
    l2.print(cout); //εκτυπωνουμε τα δεδομενα του μαθηματος
    cout<<" "<<endl;

    //CONSTRUCTOR & COPY CONSTRUCTOR & OPERATOR=
    vector<pair<lesson*,float>> passed_lessons; /*χρησιμοποιουμε vector για τα περασμενα μαθηματα
                                                σαν παραμετρο δεχεται το αντικειμενο της κλασης lesson(τα μαθηματα) 
                                                και τον τυπο δεδομενων float για τους βαθμους.
                                                O vector ειναι τυπου pair γιατι χρησιμοποιουμε δυο διαφορετικους τυπους δεδομενων*/

    passed_lessons.push_back(make_pair(&l1,6.78)); /*χρησιμοποιουμε το push_back(make_pair()) για να εισαγουμε δυο στοιχεια στο vector
                                                    οπου &l1 το πρωτο μαθημα και 6.78 ο βαθμος*/

    vector<lesson*> declared_lessons;           /*χρησιμοποιουμε vector για τα δηλωμενα μαθηματα
                                                σαν παραμετρο δεχεται το αντικειμενο της κλασης lesson(τα μαθηματα)*/

    declared_lessons.push_back(&l2);  /*χρησιμοποιουμε το push_back() για να εισαγουμε στοιχεια στο vector
                                        οπου &l2 το δευτερο μαθημα*/
	student s1("20390178","Μαρία Παπαδοπούλου",6,declared_lessons,passed_lessons);
    vector<lesson*> declared_lessonsb;
    declared_lessons.push_back(&l4);
    vector<pair<lesson*,float>> passed_lessonsb;
    passed_lessonsb.push_back(make_pair(&l7,7.5));
    passed_lessonsb.push_back(make_pair(&l1,5.5));
    student s3("1154210", "Νίκος Χρήστου", 10,declared_lessons,passed_lessonsb);

    student s2=s3; //χρησιμοποιουμε το operator =, αντι για copy constructor
    student s4(s2); //χρησιμοποιουμε copy constructor
    s2.setAM("22390888"); //χρησιμοποιουμε setter για να αλλαξουμε τον αριθμο μητρωου του 2ου φοιτητη
    s2.setName("Άννα Παπά"); //χρησιμοποιουμε setter για να αλλαξουμε το ονομα του 2ου φοιτητη
    s2.setStudent_Semester(2); //χρησιμοποιουμε setter για να αλλαξουμε το εξαμηνο του 2ου φοιτητη
    s2.setDeclaredLessons(declared_lessonsb); //χρησιμοποιουμε setter για να αλλαξουμε το δηλωμενο μαθημα του 2ου φοιτητη
    vector<pair<lesson*,float>> passed_lessonsc; 
    passed_lessonsc.push_back(make_pair(&l3,8.40));
    s2.setPassedLessons(passed_lessonsc);
    s1.operator+=(l4); //προσθηκη δηλωμενου μαθηματος
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tΦΟΙΤΗΤΟΛΟΓΙΟ"<<endl;
    cout<<"-----------------------------------------------------------------------------"<<endl;
    cout<<"Αριθμός Μητρώου νέου φοιτητή: "<< s2.getAM() <<endl;
    cout<<"Ονοματεπώνυμο νέου φοιτητη: "<< s2.getName() <<endl;
    cout<<"Εξάμηνο Παρακολούθησης νέου φοιτητή: "<< s2.getStudent_Semester() <<endl;
    cout<<"Δηλωμένα Μαθήματα νέου φοιτητή: "<< s2.getDeclared_lessons().size() <<endl;

    cout<<" "<<endl;
    cout<<"Αναλυτική Βαθμολογία φοιτητών!!"<<endl;
        cout<<s1<<endl;
        cout<<"----------------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<s2<<endl;
        cout<<"----------------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<s3<<endl;
        cout<<"----------------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<s4<<endl;
    //Συγκρινουμε τους δυο φοιτητες s1,s2 οσον αφορα το εξαμηνο. αν ισχυει η συγκριση επιστρεφει 1 αλλιως 0.
    cout<<"Συγκρίνουμε τους δύο φοιτητές s1,s2 όσον αφορά το εξάμηνό τους. Αν ισχύει η σύγκριση επιστρέφεται 1, αλλιώς 0."<<endl;
    cout<<"Εξάμηνο S1: 6"<<endl;
    cout<<"Εξάμηνο S2: 2"<<endl;
    cout<<"\ts1==s2: "<<s1.operator==(s2)<<endl; //s1==s2
    cout<<"\ts1!=s2: "<<s1.operator!=(s2)<<endl; //s1!=s2
    cout<<"\ts1<s2: "<<s1.operator<(s2)<<endl; //s1<s2
    cout<<"\ts1<=s2: "<<s1.operator<=(s2)<<endl; //s1<=s2
    cout<<"\ts1>s2: "<<s1.operator>(s2)<<endl; //s1>s2
    cout<<"\ts1>=s2: "<<s1.operator>=(s2)<<endl; //s1>=s2


    //αρχειο
    ofstream output_file;
    output_file.open("student.txt", ios::in | ios::trunc );//ανοιγμα αρχειου (ios::in->αναγνωση, ios::trunc->αν υπαρχει το αρχειο σβηνεται)
    if(output_file)
    {
        output_file << s1; //εμφανιζει στο αρχειο τα στοιχεια του 1ου φοιτητη
        output_file << endl;
        output_file << s2; //εμφανιζει στο αρχειο τα στοιχεια του 2ου φοιτητη
        output_file << endl;
        output_file << s3; //εμφανιζει στο αρχειο τα στοιχεια του 3ου φοιτητη
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"\t\t\tΑΠΟΘΗΚΕΥΣΗ ΔΕΔΟΜΕΝΩΝ ΣΕ ΑΡΧΕΙΟ ΚΕΙΜΕΝΟΥ"<<endl;
        cout<<"-----------------------------------------------------------------------------"<<endl;
        cout<<"Τα δεδομένα υπάρχουν στο αρχείο student.txt "<<endl;
        output_file.close(); //κλεισιμο αρχειου
    }
    else
    {
        cout<<"Η εγγραφη δεν ολοκληρωθηκε με επιτυχια "<<endl;
    }
	return 0;

     //ΑΣΚΗΣΗ 2
    // cout<<"Ostream:"<<endl;
    // cout<<" "<<endl;
	// s1.print(cout);
	// cout<<"******************************************************"<<endl;
    // cout<<" "<<endl;

    // cout<<"Ostream for student 2:"<<endl;
    // cout<<" "<<endl;
	// s2.print(cout);
    // cout<<"*******************************************************"<<endl;
    // cout<<" "<<endl;

    // cout<<"Getter:"<<endl;
	// cout<<" "<<endl;
	// cout<<"Όνομα: "<<s1.getName()<<endl;
	// cout<<"Αριθμός Μητρώου: "<<s1.getAM()<< endl;
	// cout<<"Εξάμηνο: "<<s1.getStudent_Semester()<<endl;
	// cout<<"******************************************************"<<endl;
    // cout<<" "<<endl;

    // cout<<"Copy Constructor:"<<endl;
    // cout<<" "<<endl;
	// cout<<"Όνομα: "<<s4.getName()<<endl;
	// cout<<"Αριθμός Μητρώου: "<<s4.getAM()<< endl;
	// cout<<"Εξάμηνο: "<<s4.getStudent_Semester()<<endl;
    // cout<<"******************************************************"<<endl;
    // cout<<" "<<endl;

    // cout<<"Setter of Copy Constructor:"<<endl;
	// cout<<" "<<endl;
	// s4.setName("Παναγιώτης Θεοχάρης");
	// s4.setAM("18390456");
	// s4.setStudent_Semester(2);
    // s4.print(cout);

	// cout<<"******************************************************"<<endl;
    // cout<<" "<<endl;

    // cout<<"Semester++:"<<endl;
    // cout<<" "<<endl;
    // s2.operator++();
    // s2.print(cout);
    // cout<<"******************************************************"<<endl;
    // cout<<" "<<endl;

    // cout<<"++Semester:"<<endl;
    // cout<<" "<<endl;
    // s2.operator++();
    // s2.print(cout);
    // cout<<"******************************************************"<<endl;
    // cout<<" "<<endl;

    // cout<<"Semester+=s:"<<endl;
    // cout<<" "<<endl;
    // s2.operator+=(2);
    // s2.print(cout);
    // cout<<"******************************************************"<<endl;
    // cout<<" "<<endl;


    // cout<<"Semester-=s:"<<endl;
    // cout<<" "<<endl;
    // s2.operator-=(2);
    // s2.print(cout);
    // cout<<"******************************************************"<<endl;
    // cout<<" "<<endl;

}