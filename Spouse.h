#ifndef SPOUSE_H
#define SPOUSE_H

#include "Person.h"
#include <string>
using namespace std;

class Spouse : public Person {
    private:
        string AnniversaryDate ;
    public:
        string getAnniversaryDate() {
            return AnniversaryDate;
        }
        void setAnniversaryDate(string AnniversaryDate) {
            this->AnniversaryDate = AnniversaryDate ;
        }
} ; 
#endif