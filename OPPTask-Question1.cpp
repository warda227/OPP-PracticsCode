#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    // Setter
    void setData(string n, int m) {
        name = n;
        marks = m;
    }

    // Getter + Display
    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.setData("Ali", 90);
    s1.display();
}