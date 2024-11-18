#include <iostream>
using namespace std;

class Animal {
public:
    // Base class method (virtual to allow overriding)
    virtual void sound() {
        cout << "This is a generic animal sound." << endl;
    }
};

class Dog : public Animal {
public:
    // Overriding the sound() method
    void sound() override {
        cout << "Woof! Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    // Overriding the sound() method
    void sound() override {
        cout << "Meow! Meow!" << endl;
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    // Calls the overridden method in Dog
    animal1->sound();   // Output: Woof! Woof!

    // Calls the overridden method in Cat
    animal2->sound();   // Output: Meow! Meow!

    delete animal1;
    delete animal2;
    return 0;
}
