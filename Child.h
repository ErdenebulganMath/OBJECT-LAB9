#ifndef CHILD_H
#define CHILD_H

#include "Person.h"
#include <string>

class Child : public Person { 
    private :
        string FavoriteToy ; 
    public : 
        string getFavoriteToy() {
            return FavoriteToy ;
        }
        void setFavoriteToy(string FavoriteToy) {
            this->FavoriteToy = FavoriteToy ;
        }
} ; 

#endif