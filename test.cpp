#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int delay = 250000;

int main()
{
    static int myCase = -1;
    cout << "\\\\\\"     << flush;
    for (int i = 0; i < 21; i++)
    {   

        myCase = i % 6;
        switch(myCase)
        {
            case 0: cout << "\b/"        << flush; usleep(delay); break;
            case 1: cout << "\b\b//"     << flush; usleep(delay); break;
            case 2: cout << "\b\b\b///"  << flush; usleep(delay); break;
            case 3: cout << "\b\b\b\\//" << flush; usleep(delay); break;
            case 4: cout << "\b\b\\/"    << flush; usleep(delay); break;
            case 5: cout << "\b\\"       << flush; usleep(delay); break;
        }
        
    }
    cout << endl << "Good bye!" << endl;
    return(0);

}
