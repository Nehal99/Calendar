// Course:  CS213 - Programming II  - 2018
// Title:   Assignment III - Task 1 - Problem 1
// Program: CS213-2018-AIII-T1-P1
// Purpose: Make Calender
// Author:  Nouran Qassem & Nehal Akram
// Date:    16 November 2018
// Version: 1.0

#include <iostream>
#include "Time.h"
#include "Appointment.h"
#include "DayAppointments.h"
#include "Calendar.h"

using namespace std;


int main()
{
    int choice = 1, numofdays, numday, app ;
    string nameofday, nameofday1 ;

    DayAppointments* d ;
   // Appointment a ;

    while (choice != 0 )
    {
        cout << " 1- insert an appointment for a specific day or for multiple days in the same week" << endl
             << " 2- display appointments for a day or for the week " << endl
             << " 3- delete an appointment" << endl
             << " 4- the appointments of a day equal to another day " << endl
             << " 5- If two days have equal appointments " << endl
             << " 0- to exit " << endl ;
        cin >> choice ;

        if (choice == 1)
        {
            cout << " Enter number of days " ;
            cin >> numofdays ;

            d = new DayAppointments[numofdays] ;
            for ( int i = 0 ; i < numofdays ; i++)
            {
                cin >> d[i] ;
            }
            cout << endl ;
        }
        if (choice == 2)
        {
            cout << " How many days " ;
            cin >> numday ;

            for (int i = 0 ; i < numday ; i++)
            {
                cout << " Enter day " ;
                cin >> nameofday ;
                for ( int i = 0 ; i < numofdays ; i++)
                {
                    if (nameofday == d[i].getWeekDay())
                    {
                        cout << d[i] ;
                    }
                }

            }
        }
        if (choice == 3)
        {
            cout << " Delete appointment in day " ;
            cin >> nameofday ;

            for ( int i = 0 ; i < numofdays ; i++)
            {
                if (nameofday == d[i].getWeekDay())
                {
                    cout << " Enter number of appointment to be deleted " ;
                    cin >> app ;

                    d[i].deleteAppointment(app) ;
                }
            }
        }
        if (choice == 4)
        {
            int x , y ;
            cout << "Enter first day " ;
            cin >> nameofday ;

            cout << "Enter Second day " ;
            cin >> nameofday1 ;

            for (int i = 0 ; i < numofdays ; i++)
            {
                if (d[i].getWeekDay() == nameofday )
                {
                   x = i ;
                }
                if (d[i].getWeekDay() == nameofday1 )
                {
                    y = i ;
                }
            }
            d[y] = d[x] ;
            for ( int i = 0 ; i < numofdays ; i++)
            {
                if (nameofday1 == d[i].getWeekDay())
                {
                    cout << d[i] ;
                }
            }
        }
        if (choice == 5)
        {
            int x, y ;
            cout << "Enter first day " ;
            cin >> nameofday ;

            cout << "Enter second day " ;
            cin >> nameofday1 ;

            for (int i = 0 ; i < numofdays ; i++)
            {
                if ( d[i].getWeekDay() == nameofday )
                {
                    x = i ;
                }
                if ( d[i].getWeekDay() == nameofday1 )
                {
                    y = i ;
                }
            }
            if (*(d[x].getAppointment() )== *(d[y].getAppointment()))
            {
                cout << "two days have equal appointments " << endl ;
            }
            else
            {
                cout << "two days don't have equal appointments " << endl ;
            }
        }
    }
    delete d ;
}
