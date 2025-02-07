#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    float marks;

    void setDetails(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student1;
    student1.setDetails("John", 101, 89.5);
    student1.displayDetails();
    return 0;
}

