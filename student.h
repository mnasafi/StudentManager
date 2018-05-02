#ifndef _STUDENT_H
#define _STUDENT_H_

#include <stdlib.h>
#include <string> // include to prevent compile errors. Won't recognize string.

using namespace std;

class student
{
    private:
        string firstName;
        string lastName;


    public:
        void setName(string fname, string lname);
        string fullName();





}; // end student class


#endif
