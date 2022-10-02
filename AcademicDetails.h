/**
 * Project Untitled
 */


#ifndef _ACADEMICDETAILS_H
#define _ACADEMICDETAILS_H

#include "StudentProfile.h"


class AcademicDetails: public StudentProfile {
public: 
    
bool insertDetails();
    
bool updateDeatils();
    
bool displayDetails();
private: 
    number backlogs;
    bool malpractice;
    array semister_sgpa;
    float cgpa;
    string certificates;
    array extracurricularactivities;
    bool eligibility;
};

#endif //_ACADEMICDETAILS_H