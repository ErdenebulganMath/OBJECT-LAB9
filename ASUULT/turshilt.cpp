#include <vector>
#include <iostream>
using namespace std;
class Shape2D{ public: char name[20]; };
class Triangle: public Shape2D { public: float side; };
class Square: public Shape2D { public: float side; };
class Circle: public Shape2D { public: float radius; };

int main()
{
    // built-in буюу заяамал өгөгдлийн төрлөөс үүссэн хувьсагчийг vector бүтцэд хадгалах нь
    vector<int> list_of_ints; // Create new list
    list_of_ints.push_back(3); // Insert item
    list_of_ints.push_back(23);

    Circle c1;
    Triangle t1;
    Square s1;
    // class буюу үүсмэл өгөгдлийн төрлөөс үүссэн хувьсагчийг vector бүтцэд хадгалах нь
    vector<Shape2D> list_of_shapes; // Create new list
    list_of_shapes.push_back(c1); // Insert item circle
    list_of_shapes.push_back(t1); // Insert item triangle
    list_of_shapes.push_back(s1); // Insert item square

    cout << list_of_shapes.size() << endl; // How many?
    for(int i = 0 ; i < list_of_shapes.size() ; i++){
        cout << list_of_shapes[i].name << endl; // Print item
    }

    cout << list_of_ints.size() << endl; // How many?

    for(int i=0 ; i<list_of_ints.size() ; i++){
        cout << list_of_ints[i] << endl; // Print item
    }
    return 0;
}