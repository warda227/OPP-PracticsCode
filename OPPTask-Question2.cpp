#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int price;

public:
    // Constructor
    Car(string b, int p) {
        brand = b;
        price = p;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Car c1("Toyota", 5000000);
    c1.display();
}