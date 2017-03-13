//
//  Timer.cpp
//  FirstCPlusPlusPorject
//
//  Created by Nguyen, Duncan on 1/31/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#include <iostream>
#include "Timer.hpp"

using namespace std;

Timer:: Timer()
{
    executionTime = 0;
}

void Timer :: resetTimer()
{
    executionTime = 0;
}

void Timer :: startTimer()
{
    executionTime = clock();
}

void Timer :: finishTimer()
{
    executionTime = clock() -executionTime;
}

long Timer :: getExecutiontimeInMircoseconds()
{
    return executionTime;
}

void Timer :: displayTimerInformation()
{
    cout << "This is the time you got" << executionTime << endl;
    cout << "That is this many seconds meatbag " << executionTime/CLOCKS_PER_SEC << endl;
}
