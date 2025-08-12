#include <iostream>
using namespace std;

int addition(int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}

int main() {
    int firstNumber, secondNumber;

    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    int sum = addition(firstNumber, secondNumber);

    cout << "The sum of " << firstNumber << " and " << secondNumber << " is: " << sum << endl;

    return 0;
}