#ifndef JOBDESCRIPTION_H
#define JOBDESCRIPTION_H

#include<string>
using namespace std;

class JobDescription {
    private :
        string description ; 
    public :
        string getDescription() {
            return description ;
        }
        void setDescription(string description) {
            this->description = description ;
        }
    
} ;

#endif 