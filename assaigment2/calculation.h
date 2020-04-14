#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class createArr
{
public:
    int midEle;
    int eleArr[100] = {};

    int crtArrEll();
    
};

int createArr::crtArrEll()
{
    cout << "func called";
    srand(time(0));

    for (int i = 0; i < 99; i++)
    {
        eleArr[i] = (rand() % 100) + 1;
    }

    void printArr();

    return 0;
}

void printArr(int eleArr[])
{
    for (int i = 0; i < 99; i++)
    {
        cout << " " << eleArr[i] << " ";
    }
}