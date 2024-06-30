#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }
    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark! Woof woof!" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "I can meow! Meow meow!" << endl;
    }
};

int main() {
    Dog myDog;
    Cat myCat;

    // Dog can access methods from Animal class
    myDog.eat();
    myDog.sleep();
    myDog.bark();

    // Cat can access methods from Animal class
    myCat.eat();
    myCat.sleep();
    myCat.meow();

    return 0;
}
