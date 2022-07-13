#include <iostream>
#include <fstream>

using namespace std;

void Problem ();
void Solution ();

int main ()
{
    Problem ();
    cout << "------------------------" << endl; 
    Solution ();
}

void Problem ()
{
    char Buff[100];
    ifstream F ("File2.txt");
    while (!F.eof ())
    {
        F >> Buff;
        cout << Buff << endl;
    }
    F.close ();
}

void Solution ()
{
    char Buff[100];
    ifstream F;
    F.open ("File2.txt");
    do
    {
        F >> Buff;
        if (!F.eof ())
            cout << Buff << endl;
    }
    while (!F.eof ());
    F.close ();
}



