#ifndef _STUDENT_H
#define _STUDENT_H_


#include <iostream> // include to prevent compilation error with string undefined.
                    // gives the string library.

using namespace std;

class student
{
    private:
        string firstName;
        string lastName;
        string completeName;


    public:
        void setName(string fName, string lName);
        string fullName();





}; // end student class


#endif
