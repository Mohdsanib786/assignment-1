#include <iostream>
using namespace std;

class Rectangle {
    float length, breadth;
public:
    Rectangle(float l, float b) : length(l), breadth(b) {}
    float area() { return length * breadth; }
    float perimeter() { return 2 * (length + breadth); }
};

int main() {
    float l, b;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;

    Rectangle r(l, b);
    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;
    return 0;
}
