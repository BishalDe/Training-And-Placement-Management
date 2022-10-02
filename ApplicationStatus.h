/**
 * Project Untitled
 */


#ifndef _APPLICATIONSTATUS_H
#define _APPLICATIONSTATUS_H

class ApplicationStatus {
public: 
    
void display();
    
void notifications();
private: 
    string selection_status;
    string current_phase;
    datetime datetime;
    string place;
};

#endif //_APPLICATIONSTATUS_H