#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) { return a + b; }
    float add(float a, float b) { return a + b; }
};

class Animal {
public:
    virtual void sound() { cout << "Animal makes a sound" << endl; }
    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void sound() override { cout << "Dog barks" << endl; }
};

int main() {
    Calculator c;
    cout << "Integer addition: " << c.add(10, 20) << endl;
    cout << "Float addition: " << c.add(10.5f, 20.5f) << endl;

    Animal* a = new Dog();
    a->sound();
    delete a;
    return 0;
}
