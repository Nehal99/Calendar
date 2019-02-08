#ifndef DAYAPPOINTMENTS_H
#define DAYAPPOINTMENTS_H
#include <iostream>
#include "Appointment.h"

using namespace std ;

class DayAppointments
{
public:
    DayAppointments(); //default constructor
    DayAppointments ( const DayAppointments &d1) ; // copy constructor
    void setAppointment (Appointment* app) ; //set values of appointments array
    void setNum (int n) ; // set value of array size
    void setWeekDay (string w) ; // set value of day
    Appointment* getAppointment () ;//get values of appointments array
    int getNum () ;// get value of array size
    string getWeekDay() ; // get value of day
    void deleteAppointment (int x);  // function to delete one appointment
    Appointment operator[] (int pos); // operator used to access array index
    bool operator == ( const DayAppointments& d1 ) ;// compare two day appointment return true if equal
    bool operator != ( const DayAppointments& d1 ); // compare two day appointment return true if not equal
    DayAppointments operator= (const DayAppointments &d1); // assignment operator to make two appointments equal to each other
    friend ostream& operator<< (ostream& out, const DayAppointments& day ) ; // output day and its values
    friend istream& operator>> (istream& in, DayAppointments& day ) ; // input day and its values
    ~DayAppointments();

protected:
    Appointment* appointments;
    int numOfAppointments;
    string weekDay;

};

#endif // DAYAPPOINTMENTS_H
