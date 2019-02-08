#include "Time.h"
#include <iostream>

using namespace std ;

Time::Time()
{

    hour = 0 ;
    minute = 0 ;
    daynight = " " ;
}
Time::Time ( int h, int m, string Dn ) // parameterized constructor
{
    hour = h ;
    minute = m ;
    daynight = Dn ;
}
void  Time::setHour( int h ) // set value of hour
{
    hour = h ;
}
void Time::setMinute ( int m ) // set value of minute
{
    minute = m ;
}
void Time:: setDaynight( string Dn ) // set value of day night
{
    daynight = Dn ;
}
int Time:: getHour() // get value of hour
{
    return hour ;
}
int Time:: getMinute () // get value of minute
{
    return minute  ;
}
string Time :: getDaynight () // get value of day night
{
    return daynight ;
}
bool Time:: operator> (const Time& t) //compare two time and return true if first greater than second
{
    if (daynight == t.daynight )
    {
        if (hour > t.hour)
        {
            return false ;
        }
        if (hour == t.hour)
        {
            if (minute > t.minute)
            {
                return false ;
            }
        }
        return true ;
    }
    return true ;
}

bool Time:: operator< (const Time& t)  //compare two time and return true if first smaller than second
{
    if (daynight == t.daynight )
    {
        if (hour < t.hour)
        {
            return true ;
        }
        if (hour == t.hour)
        {
            if (minute < t.minute)
            {
                return true ;
            }
        }
        return false ;
    }
    return true ;
}
bool Time:: operator== (const Time& t)  // compare two times together and return true if equal
{
    if (daynight == t.daynight)
    {
        if ( hour == t.hour)
        {
            if (minute == t.minute)
            {
                return true ;
            }
        }
    }
    return false ;
}
bool Time:: operator!= (const Time& t)  // compare two times together and return true if not equal
{
    if (daynight != t.daynight)
    {
        if ( hour != t.hour)
        {
            return true ;
        }
    }
    return false ;
}

ostream& operator<< (ostream& out, const Time& t) // output values of hour minute and day night
{
    out << t.hour << " " << t.minute << " " << t.daynight ;
    cout << endl ;
    return out ;
}
istream& operator>> (istream& in,  Time& t) // input values of hour minute and day night
{
    cout << " Enter hours "  ;
    in >> t.hour ;
    cout << " Enter minutes " ;
    in >> t.minute ;
    cout << " Enter day night " ;
    in >> t.daynight ;
    return in ;
}
