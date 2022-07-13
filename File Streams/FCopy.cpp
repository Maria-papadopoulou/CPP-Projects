#include <iostream>
#include <fstream>

using namespace std;


int main (int argc, char **argv)
{
    fstream InpF, OutF;
    char Buff[1024];
    int Br, TotBr = 0;
    
    if (argc != 3)
    {
        cout << "syntax: " << argv[0] << " <source file> <destination file>" << endl;
        exit (1);
    }
    
    InpF.open (argv[1], ios::in | ios::binary);
    if (!InpF.good ())
    {
        cout << "Cannot open source file..." << endl;
        exit (2);
    }
    
    OutF.open (argv[2], ios::out | ios::binary);
    if (!OutF.good ())
    {
        cout << "Cannot open destination file..." << endl;
        exit (2);
    }
    
    
    //OutF << InpF.rdbuf ();
    
    do
    {
        InpF.read (Buff, 100);
        TotBr += Br = InpF.gcount ();
        //cout << TotBr << " " << InpF.eof () << " " << InpF.fail () << endl;
        if (Br)
            OutF.write (Buff, Br);
    }
    while (Br); 
    InpF.close ();
    OutF.close ();
    cout << TotBr << " bytes copied" << endl;
}

