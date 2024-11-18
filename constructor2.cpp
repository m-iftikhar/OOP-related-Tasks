#include <iostream>
using namespace std;

class MyClass {
    int x;
    int y;

public:
    // Parameterized Constructor
    MyClass(int a, int b) : x(a), y(b) {
        cout << "Parameterized Constructor called" << endl;
    }

    // Copy Constructor
    MyClass(const MyClass& other) : x(other.x), y(other.y) {
        cout << "Copy Constructor called" << endl;
    }

    // Method to display values
    void display() const {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

int main() {
    MyClass obj1(10, 20);  // Calls parameterized constructor
    obj1.display();

    MyClass obj2 = obj1;    // Calls copy constructor
    obj2.display();

    return 0;
}


