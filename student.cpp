#include "student.h"
#include <iostream>
#include <stdlib.h>


using namespace std;


string student::fullName()
{
    completeName.append(firstName);
    completeName.append(" "); // inserts space
    completeName.append(lastName);

    return completeName;

} // end fullName()


void student::setName(string fName, string lName)
{
    firstName = fName;
    lastName = lName; // lower-case L, not 1.

} // end setName()
