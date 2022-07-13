#include <iostream>
#include <fstream>

using namespace std;

void ShowFlags (fstream &);

int main ()
{
    char Buff[100];
    int v1 = -1;
    double v2 = -1.0;
    string Fn;
    fstream F;
    Fn = "File3.txttxt";
    F.open (Fn.c_str ());
    ShowFlags (F);
    Fn = "File3.txt";
    F.open (Fn.c_str ());
    ShowFlags (F);
    F >> v1;
    cout << v1 << endl;
    ShowFlags (F);
    F.clear ();
    F >> Buff;
    F >> v1;
    cout << v1 << endl;
    ShowFlags (F);
    F >> v2;
    cout << v2 << endl;
    ShowFlags (F);
    F >> Buff;
    cout << Buff << endl;
    ShowFlags (F);
    
}

void ShowFlags (fstream &F)
{
    cout << "Good   Bad    Fail   Eof" << endl;
    cout << "  " << F.good () << "     " << F.bad () << "      " << F.fail () << "      " << F.eof () << endl << endl;
    
}

    



