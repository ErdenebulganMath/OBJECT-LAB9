#include<bits/stdc++.h>
using namespace std;

class Room {
    private :
        string name ; 
    public :

        Room(string n){
            name = n ;
        }

        void setName(string n){
            name = n ;
        }

        void show(){
            cout << name << endl ;
        }

} ; 

class House {
    private :
        Room* room[2] ; 
    public :
       House(){
           room[0] = new Room("Living room") ;
           room[1] = new Room("Kitchen room") ;
       }

       void showHouse(){
           room[0]->show() ;
           room[1]->show() ;
       }

       ~House(){
           delete room[0] ;
           delete room[1] ;
       }

} ;

int main(){
    House myHouse ;
    myHouse.showHouse() ;
}