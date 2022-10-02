/**
 * Project Untitled
 */


#ifndef _STUDENTPROFILE_H
#define _STUDENTPROFILE_H

#include "SignUp.h"
#include "SignUp.h"
#include "SignUp.h"


class StudentProfile: public SignUp, public SignUp, public SignUp {
public: 
    character usertype;
    
bool AddProfile();
    
bool UpdateProfile();
    
bool DeleteProfile();
private: 
    string registrationNumber;
    Date D.O.B;
    char Gender;
    string fathersname;
    string fathersmobile;
    string mothersname;
    string mothersmobile;
    string Degree;
    string branch;
    number graduationyear;
    char bloodgroup;
    string address;
    string city;
    number pincode;
    string state;
};

#endif //_STUDENTPROFILE_H