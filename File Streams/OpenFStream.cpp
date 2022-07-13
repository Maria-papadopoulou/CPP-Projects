#include <iostream>
#include <fstream>

using namespace std;

//Σβήνει το αρχείο αν υπάρχει; ΝΑΙ
//Το δημιουργεί αν δεν υπάρχει; ΝΑΙ
void Check1 ()
{
    fstream F ("File1.txt", ios::out);
    F.close ();
}

//Αν υπάρχει δεν σβήνει το αρχείο χωρίς trunc, το σβήνει με trunc
//Αν δεν υπάρχει δεν το δημιουργεί χωρίς trunc, το δημιουργεί με trunc
void Check2 ()
{
    fstream F ("File.txt", ios::in | ios::out | ios::trunc);
    F.close ();
}


//Με ios::app δεν γράφει πίσω, με ios::ate ξεκινάει στο τέλος αλλά γράφει πίσω.
void Check3 ()
{
    fstream F ("File.txt", ios::in | ios::out | ios::app);
    F << "123";
    cout << F.good ();
    F.seekp (0);
    cout << F.good ();
    F << "456";
    cout << F.good ();
    F.close ();
}

int main (int argc, char **argv)
{
    //Check1 ();
    //Check2 ();
    //Check3 ();
}
