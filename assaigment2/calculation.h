#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class createArr
{
public:
    int midEle;
    int eleArr[10000] = {};

    int crtArrEll();
    void printArr();
    
};

int createArr::crtArrEll()
{
    //cout << "func called\n";
    srand(time(0));

    for (int i = 0; i < 9999; i++)
    {
        eleArr[i] = (rand() % 10000) +1;
    }
    midEle = eleArr[5000];
    void printArr();                        //Not work???

    return 0;
}

void createArr::printArr()
{
    //cout << "func called 2\n";
    for (int i = 0; i < 9999; i++)
    {
        cout << " " << eleArr[i] << " ";
    }
    cout << endl;
}
