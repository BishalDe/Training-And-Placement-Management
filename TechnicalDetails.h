/**
 * Project Untitled
 */


#ifndef _TECHNICALDETAILS_H
#define _TECHNICALDETAILS_H

#include "StudentProfile.h"


class TechnicalDetails: public StudentProfile {
public: 
    
bool Insert();
    
bool Modify();
    
bool Display();
private: 
    array internships_details;
    array clubs_joined;
    array programming_languages;
    object resume;
};

#endif //_TECHNICALDETAILS_H