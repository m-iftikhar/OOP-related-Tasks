#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double breadth;
    double height;

public:
    // Default constructor
    Box() {
        length = 0.0;
        breadth = 0.0;
        height = 0.0;
        cout << "Default constructor called." << endl;
    }

    // Parameterized constructor
    Box(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
        cout << "Parameterized constructor called." << endl;
    }

    // Copy constructor
    Box(const Box &box) {
        length = box.length;
        breadth = box.breadth;
        height = box.height;
        cout << "Copy constructor called." << endl;
    }

    // Method to display dimensions
    void display() {
        cout << "Length: " << length << ", Breadth: " << breadth << ", Height: " << height << endl;
    }
};

int main() {
    // Creating objects using different constructors
    Box box1; // Default constructor
    box1.display();

    Box box2(10.0, 20.0, 30.0); // Parameterized constructor
    box2.display();

    Box box3 = box2; // Copy constructor
    box3.display();

    return 0;
}
