#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstPerson;
    string secondPerson;

    cout << "Enter the Name of the First Person: ";
    cin >> firstPerson;

    cout << "Enter the Name of the Second Person: ";
    cin >> secondPerson;

    if (firstPerson == secondPerson) {
        cout << "User is already present!!" << endl;
    } else {
        cout << "Welcome " << secondPerson << endl;
    }
    return 0;
}
