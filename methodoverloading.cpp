#include <iostream>
using namespace std;

class Printer {
public:
    void print(int num) {
        cout << "Printing integer: " << num << endl;
    }

    void print(string text) {
        cout << "Printing string: " << text << endl;
    }
};

int main() {
    Printer printer;
    printer.print(42);           // Calls print(int)
    printer.print("Hello");       // Calls print(string)
    return 0;
}
