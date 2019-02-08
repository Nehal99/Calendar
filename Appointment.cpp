#include "Appointment.h"
#include "Time.h"
#include <iostream>

using namespace std ;

Appointment::Appointment()
{
    start.setHour(0) ;
    start.setMinute(0) ;
    start.setDaynight( " " ) ;
    endd.setHour(0) ;
    endd.setMinute(0) ;
    endd.setDaynight( " " ) ;
}
void Appointment :: setStart (int h, int m, string Dn) // to set given values of start time
{
    start.setHour(h) ;
    start.setMinute(m) ;
    start.setDaynight(Dn) ;
}
void Appointment:: setEnd (int h1, int m1, string Dn1) //to set given values of end time
{
    endd.setHour(h1) ;
    endd.setMinute(m1) ;
    endd.setDaynight(Dn1) ;
}
Time Appointment :: getStart () // to set given values of start time
{
    return start ;
}
Time Appointment:: getEnd ()  //to set given values of end time
{
    return endd ;
}
bool Appointment:: operator >= (const Appointment& a) // compare two appointments
{
    if (start > a.start && start == a.start && endd > a.endd && endd == a.endd)
    {
        return true ;
    }
    return false ;
}
bool Appointment :: operator <= (const Appointment& a) //compare two appointments
{
    if (start < a.start && start == a.start && endd < a.endd && endd == a.endd)
    {
        return true ;
    }
    return false ;
}
bool Appointment :: operator> (const Appointment& a) //compare two appointments and return true if first greater than second
{
    if ( start > a.start &&  endd > a.start)
    {
        return false ;
    }
    return true ;
}
bool Appointment ::operator< (const Appointment& a) //compare two appointments and return true if first smaller than second
{
    if ( start < a.start &&  endd < a.start)
    {
        return true ;
    }
    return false ;
}
bool Appointment :: operator== (const Appointment& a) //compare two time and return true if equal
{
    if ( start == a.start && endd == a.endd)
    {
        return true ;
    }
    return false ;
}
bool Appointment :: operator!= (const Appointment& a) //compare two time and return true if not equal
{
    if ( start != a.start && endd != a.endd)
    {
        return true ;
    }
    return false ;
}
ostream& operator<< (ostream& out, const Appointment& ap ) // output values of start and end time
{
    out << " Start = " << ap.start << endl << " End = " << ap.endd ;
    cout << endl ;
    return out ;
}
istream& operator>> (istream& in,  Appointment& ap ) // input values of start and end time
{
    cout << "start time: " << endl ;
    in >> ap.start ;
    cout << "End time: " << endl ;
    in >> ap.endd ;
    return in ;
}
