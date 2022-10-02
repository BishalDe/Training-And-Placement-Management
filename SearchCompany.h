/**
 * Project Untitled
 */


#ifndef _SEARCHCOMPANY_H
#define _SEARCHCOMPANY_H

#include "CompanyInformation.h"


class SearchCompany: public CompanyInformation {
public: 
    
bool searchBy();
private: 
    string company_name;
    string job_post;
    string job_description;
};

#endif //_SEARCHCOMPANY_H