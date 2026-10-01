#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    cout << "Size = " << v.size() << endl;
    cout << "Front element = " << v.front() << endl;
    cout << "Back element = " << v.back() << endl;
    cout << "Element at index 1 = " << v.at(1) << endl;

    v.insert(v.begin() + 1, 15);
    cout << "After insert: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    v.erase(v.begin() + 1);
    cout << "After erase: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    v.pop_back();
    cout << "After pop_back: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    v.clear();
    cout << "After clear, size = " << v.size() << endl;

    return 0;
}
