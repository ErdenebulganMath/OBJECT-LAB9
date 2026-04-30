#include <iostream>
#include <string>
using namespace std;

// Эх класс (Base Class)
class Animal {
private:
    string name; // Зөвхөн энэ класс дотор харагдана

public:
    // Утга оноох функц (Setter)
    void setName(string n) {
        name = n;
    }

    // Утга авах функц (Getter)
    string getName() {
        return name;
    }

    void eat() {
        cout << getName() << " is eating " << endl;
    }
};

// Удамшсан класс (Derived Class)
class Dog : public Animal {
public:
    void bark() {
        // name нь private учраас шууд ашиглаж болохгүй, getName() ашиглана
        cout << getName() << " is barking: Woof woof!" << endl;
    }
};

int main() {
    Dog myDog;
    
    // myDog.name = "Банхар";  <-- Энэ нь АЛДАА өгнө (private учраас)
    
    myDog.setName("Banhar"); // Public функцээр дамжуулж утга онооно
    
    myDog.eat();  
    myDog.bark(); 
    
    return 0;
}