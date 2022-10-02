/**
 * Project Untitled
 */


#ifndef _COMPANYINFORMATION_H
#define _COMPANYINFORMATION_H

class CompanyInformation {
public: 
    
void addComapny();
    
bool deleteCompany();
    
bool editCompany();
    
bool searchCompany();
    
void displayAll();
private: 
    string company_name;
    string company_id;
    string company_type;
    string address;
    string company|_description;
    string job_description;
};

#endif //_COMPANYINFORMATION_H