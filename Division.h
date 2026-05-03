#ifndef DIVISION_H
#define DIVISION_H

#include<string>
using namespace std ;

class Division {
    private :
        string DivisionName ; 
    public :
        string getDivisionName() {
            return DivisionName ;
        }
        void setDivisionName(string name) {
            this->DivisionName = name ;
        }
    
} ;

#endif