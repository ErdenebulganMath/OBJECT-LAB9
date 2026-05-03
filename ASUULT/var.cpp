#include <bits/stdc++.h>
using namespace std;

class Room {
public:
    string name;
} ;

class House {
private:
    Room room ;  

public:
    House() {
        room.name = "Bedroom" ;
    }
} ;