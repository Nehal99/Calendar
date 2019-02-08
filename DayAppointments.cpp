#include "DayAppointments.h"
#include "Appointment.h"
#include <iostream>

using namespace std;

DayAppointments::DayAppointments()
{
    numOfAppointments = 0 ;
    weekDay = " " ;
}
DayAppointments ::DayAppointments ( const DayAppointments &d1) // copy constructor
{
    this -> numOfAppointments = d1.numOfAppointments ;
    for ( int i = 0 ; i < numOfAppointments ; i++ )
    {
        this -> appointments[i] = d1.appointments[i];
    }
}
void DayAppointments :: setAppointment (Appointment* app) //set values of appointments array
{
    appointments = app ;
}
void DayAppointments:: setNum (int n) // set value of array size
{
    numOfAppointments = n ;
}
void DayAppointments :: setWeekDay (string w) // set value of day
{
    weekDay = w ;
}
Appointment* DayAppointments:: getAppointment () //get values of appointments array
{
    return appointments ;
}
int DayAppointments :: getNum () // get value of array size
{
    return numOfAppointments ;
}
string DayAppointments :: getWeekDay() // get value of day
{
    return weekDay ;
}
void DayAppointments :: deleteAppointment (int x) // function to delete one appointment
{
    for (int i = 0 ; i < numOfAppointments ; i++)
    {
        if(i==x)
        {
            for (int j = i ; j < numOfAppointments ; j++)
            {
                appointments[j] = appointments[j+1] ;
                if (j == (numOfAppointments-2))
                {
                    break ;
                }

            }
        }
    }
    cout << " After Deleting " << endl ;
    for (int i = 0 ; i < (numOfAppointments-1) ; i++)
    {
        cout << appointments[i] << endl ;
    }
}
Appointment DayAppointments :: operator[] (int pos) // operator used to access array index
{
    return appointments[pos] ;
}
bool DayAppointments :: operator == ( const DayAppointments& d1 ) // compare two day appointment return true if equal
{
    if (appointments == d1.appointments )
    {
        return true ;
    }
    return false ;
}
bool DayAppointments :: operator != ( const DayAppointments& d1 ) // compare two day appointment return true if not equal
{
    if (appointments != d1.appointments)
    {
        return true ;
    }
    return false ;
}
DayAppointments DayAppointments :: operator= (const DayAppointments &d1) // assignment operator to make two appointments equal to each other
{
    numOfAppointments = d1.numOfAppointments ;
    for ( int i = 0 ; i < numOfAppointments ; i++ )
    {
       appointments[i] = d1.appointments[i];
    }
    return *this ;
}
DayAppointments::~DayAppointments()
{
    delete [] appointments ;
}

ostream& operator<< (ostream& out, const DayAppointments& day ) // output day and its values
{
    for (int i = 0 ; i < day.numOfAppointments ; i++)
    {
        out << " day is " << day.weekDay << day.appointments[i] ;
    }
    cout << endl ;
    return out ;
}
istream& operator>> (istream& in, DayAppointments& day ) // input day and its values
{
    cout << " Enter week day " ;
    in >> day.weekDay ;

    cout << " Enter number of appointments " ;
    in >> day.numOfAppointments ;

    day.appointments = new Appointment [day.numOfAppointments] ;

    for (int i = 0 ; i < day.numOfAppointments ; i++)
    {
        cout << " appointment number " << i << endl ; ;
        in >> day.appointments[i] ;
    }
    return in ;
}
