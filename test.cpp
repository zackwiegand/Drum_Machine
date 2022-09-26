#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;


int main()
{
    static int myCase = -1;
    for (int i = 0; i < 12; i++)
    {   

        ++myCase;
        switch(myCase)
        {
            case 0: cout << "(-:" << flush; sleep(1); break;
            case 1: cout << "\b8" << flush; sleep(1); break;
            case 2: cout << "\b:" << flush; sleep(1); break;
        }
        myCase = i % 2;
    }
    cout << "Good bye!" << endl;
    return(0);

}
