#include <iostream>
using namespace std;
class Outer {
private:
    int num = 10;

public:
    class Inner {
    public:
        void show(Outer &o) {
            cout << "Number from outer class: " << o.num << endl;  // Accessing outer class's private member
        }
    };
};

int main() {
    Outer outer;
    Outer::Inner inner;
    inner.show(outer);  // Accessing the outer class's private member
    return 0;
}
