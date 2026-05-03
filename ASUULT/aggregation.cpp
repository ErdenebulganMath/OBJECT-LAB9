#include <iostream>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }

    void show() {
        cout << name << endl;
    }
};

class School {
private:
    Student* student;  // Aggregation

public:
    School(Student* s) {  // гаднаас авч байна
        student = s;
    }

    void showSchool() {
        cout << "School has student: ";
        student->show();
    }
};

int main() {
    Student s1("Bat");   // 👉 Student гадна үүссэн

    School sch(&s1);     // 👉 зөвхөн ашиглаж байна

    sch.showSchool();
}