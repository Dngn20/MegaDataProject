//
//  Timer.hpp
//  FirstCPlusPlusPorject
//
//  Created by Nguyen, Duncan on 1/31/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void resetTimer();
    void finishTimer();
    void displayTimerInformation();
    long getExecutiontimeInMircoseconds();
    
};

#endif /* Timer_hpp */
