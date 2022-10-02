/**
 * Project Untitled
 */


#ifndef _STUDENTLIST_H
#define _STUDENTLIST_H

class StudentList {
public: 
    
bool insert();
    
bool modify();
    
bool delete();
    
bool display();
private: 
    string username;
    string registrationnumber;
    string email;
    string phonenumber;
    float CGPA;
    bool eligibility;
};

#endif //_STUDENTLIST_H