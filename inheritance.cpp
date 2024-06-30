#include <iostream>
using namespace std;

// Define the Electronic class
class Electronic {
public:
    void start() {
        cout << "I am electronic (parent) class function" << endl;
    }
};

// Define the mobile class that inherits from Electronic privately
class mobile : private Electronic {
public:
    string model = "huawei";

    // Public method to access the start function of the Electronic class
    void startElectronic() {
        start(); // Accessing the start method from the Electronic class
    }
};

int main() {
    // Create an instance of the mobile class
    mobile E1;
    
    // Call the start method indirectly via the public method of the mobile class
    E1.startElectronic();

    // Access the model member of the mobile class
    cout << E1.model << endl;

    // Trying to call the start method directly from the object of the mobile class will result in a compile-time error
    // E1.start(); // Uncommenting this line will cause a compilation error

    return 0;
}
