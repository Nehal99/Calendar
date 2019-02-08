#include "Calendar.h"
#include "DayAppointments.h"
#include <iostream>

using namespace std ;

Calendar:: Calendar () // default constructor
{
    numOfDays = 0 ;
}
void Calendar:: setNumOfDays (int n) // set Number Of Days
{
    numOfDays = n ;
}
void Calendar::setDays ( DayAppointments* day) // set array of day appointments
{
    days = day ;
}
int Calendar:: getNumOfDays () // get Number Of Days
{
    return numOfDays;
}
DayAppointments* Calendar:: getDays() // get array of day appointments
{
    return days ;
}
