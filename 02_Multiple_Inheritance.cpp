#include <iostream>
using namespace std;

class Father {
public:
    void show() { cout << "Father class function" << endl; }
};

class Mother {
public:
    void show() { cout << "Mother class function" << endl; }
};

class Child : public Father, public Mother {
public:
    void display() {
        Father::show();
        Mother::show();
    }
};

int main() {
    Child c;
    c.display();
    return 0;
}
