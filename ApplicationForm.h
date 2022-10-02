/**
 * Project Untitled
 */


#ifndef _APPLICATIONFORM_H
#define _APPLICATIONFORM_H

class ApplicationForm {
public: 
    
bool Apply();
    
bool Modify();
    
void Discard_Form();
    
bool notifications();
private: 
    string company_id;
    string job_post;
    string job_location;
    string preferences;
};

#endif //_APPLICATIONFORM_H