#include <iostream>
using namespace std;
// indide exapmle
class MyClass {         // The class
  public:               // Access specifier
    void myMethod() {   // Method/function
      cout << "Hello World!";
    }
};
// outside example
class MyClass2 {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass2::myMethod() {
  cout << "Hello World 2!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  MyClass2 myObj2;     // Create an object of MyClass2
  myObj.myMethod();  // Call the method
  myObj2.myMethod();  // Call the method
  return 0;
}