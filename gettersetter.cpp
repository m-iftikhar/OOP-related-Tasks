#include <iostream>
using namespace std;

// Class definition
class MyClass {

    int age;
    string name;

public:
    // Member function to set the name
    void setName(string n) {
        name = n;
    }

    // Member function to set the age
    void setAge(int a) {
        age = a;
    }

    // Member function to get the name
    string getName() {
        return name;
    }

    // Member function to get the age
    int getAge() {
        return age;
    }
};

int main() {
    MyClass obj;
    obj.setName("Iftikhar");
    obj.setAge(23); // Adding an age for demonstration

    cout << "Name: " << obj.getName() << endl;
    cout << "Age: " << obj.getAge() << endl;

    return 0;
}
