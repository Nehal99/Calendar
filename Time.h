#ifndef TIME_H
#define TIME_H
#include <iostream>

using namespace std ;


class Time
{
    public:
        Time(); // default constructor
        Time ( int h, int m, string Dn ) ; // parameterized constructor
        void setHour( int h ) ;  // set value of hour
        void setMinute ( int m ) ;  // set value of minute
        void setDaynight( string Dn ) ;// set value of day night
        int getHour() ; // get value of hour
        int getMinute () ; // get value of minute
        string getDaynight () ; // get value of day night
        bool operator> (const Time& t) ; //compare two time and return true if first greater than second
        bool operator< (const Time& t) ;  //compare two time and return true if first smaller than second
        bool operator== (const Time& t) ;  // compare two times together and return true if equal
        bool operator!= (const Time& t) ;  // compare two times together and return true if not equal
        friend ostream& operator<< (ostream& out, const Time& t) ;  // output values of hour minute and day night
        friend istream& operator>> (istream& in,  Time& t) ; // input values of hour minute and day night

    private:
    int hour;
    int minute;
    string daynight;
};

#endif // TIME_H
