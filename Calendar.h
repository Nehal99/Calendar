#ifndef CALENDAR_H
#define CALENDAR_H
#include "DayAppointments.h"
#include <iostream>

using namespace std ;


class Calendar
{
public:
    Calendar () ;  // default constructor
    void setNumOfDays (int n) ; // set Number Of Days
    void setDays ( DayAppointments* day) ; // set array of day appointments
    int  getNumOfDays () ; // get Number Of Days
    DayAppointments*  getDays() ; // get array of day appointments

private:
    DayAppointments * days;
    int numOfDays;
};

#endif // CALENDAR_H
