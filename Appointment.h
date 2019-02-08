#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <iostream>
#include "Time.h"
using namespace std ;


class Appointment
{
    public:
        Appointment();// default constructor to set default values
        void setStart (int h, int m, string Dn) ;  // to set given values of start time
        void setEnd (int h1, int m1, string Dn1) ; //to set given values of end time
        Time getStart () ; // to set given values of start time
        Time getEnd () ; //to set given values of end time
        bool operator >= (const Appointment& a) ; // compare two appointments
        bool operator <= (const Appointment& a)  ;//compare two appointments
        bool operator> (const Appointment& a) ; //compare two appointments and return true if first greater than second
        bool operator< (const Appointment& a); //compare two appointments and return true if first smaller than second
        bool operator== (const Appointment& a); //compare two time and return true if equal
        bool operator!= (const Appointment& a); //compare two time and return true if not equal
        friend ostream& operator<< (ostream& out, const Appointment& ap ) ;
        friend istream& operator>> (istream& in,  Appointment& ap ) ;

    protected:
    Time start;
    Time endd;

};

#endif
