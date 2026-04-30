#include <iostream>
using namespace std;

class Room {
private:
    string name;

public:
    Room(string n) {
        name = n;
    }

    void show() {
        cout << name << endl;
    }
};

class House {
private:
    Room* room1;
    Room* room2;

public:
    // Constraint: Room-уудыг зөвхөн House дотор үүсгэнэ
    House() {
        room1 = new Room("Bedroom");
        room2 = new Room("Kitchen");
    }

    void show() {
        cout << "House rooms:\n";
        room1->show();
        room2->show();
    }

    // Constraint: House устахад Room-ууд ч устах ёстой
    ~House() {
        delete room1;
        delete room2;
        cout << "House destroyed (rooms also destroyed)\n";
    }
};

int main() {
    House h;
    h.show();
}