#include <iostream>
using namespace std;

// Parent class 1
class MyClass {
public:
    void myFunction() {
        cout << "Some content in parent class 1." << endl;
    }
};

// Parent class 2
class MyClass2 {
public:
    void myFunction() {
        cout << "Some content in parent class 2." << endl;
    }
};

// Child class inheriting from both MyClass and MyClass2
class childclass : public MyClass, public MyClass2 {
public:
    string name = "childclass";
};

int main() {
    childclass child;

    // Call myFunction from MyClass
    child.MyClass::myFunction();

    // Call myFunction from MyClass2
    child.MyClass2::myFunction();

    return 0;
}
