#include <iostream>
using namespace std;

// Define the class myclass outside the main function
class myclass {
public:
    int age = 20;
};

// Define the class myclass2 outside the main function
class myclass2 {
public:
    string name = "iftikhar";
};

int main() {
    // Static allocation
    myclass obj1;
    myclass obj2;
    cout << "Static Allocation:" << endl;
    cout << "obj1 age: " << obj1.age << endl;
    cout << "obj2 age: " << obj2.age << endl;
    
    // Dynamic allocation
    myclass2* object1 = new myclass2;
    myclass2* object2 = new myclass2;
    cout << "Dynamic Allocation:" << endl;
    cout << "object1 name: " << object1->name << endl;  //first method
    cout << "object2 name: " << (*object2).name << endl;  //second method
    
    // Deleting object1
    delete object1;
    object1 = nullptr; // Setting pointer to nullptr after deletion for safety

    // Attempting to print deleted object pointer
    cout << "After deletion, object1 pointer: " << object1 << endl; // Should print nullptr

    // Clean up remaining dynamically allocated memory
    delete object2;

    return 0;
}
