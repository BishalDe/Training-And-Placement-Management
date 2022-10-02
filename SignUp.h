/**
 * Project Untitled
 */


#ifndef _SIGNUP_H
#define _SIGNUP_H

#include "StudentProfile.h"
#include "StudentProfile.h"


class SignUp: public StudentProfile, public StudentProfile {
public: 
    
bool SignUp();
    
bool MatchPassword();
    
bool CaptchaVerification();
private: 
    string userid;
    string name;
    character usertype;
    string password;
    string email;
    string mobilenumber;
    string confirmpassword;
};

#endif //_SIGNUP_H