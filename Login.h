/**
 * Project Untitled
 */


#ifndef _LOGIN_H
#define _LOGIN_H

class Login {
public: 
    
bool PasswordVerify();
    
bool RememberPassword();
    
void Logout();
private: 
    string id;
    string password;
    character usertype;
};

#endif //_LOGIN_H