#include <iostream>
using namespace std;

int factorial(int number) {
    if (number == 0 || number == 1)
        return 1;
    return number * factorial(number - 1);
}

int main() {
    int userInput;
    cout << "Enter a number to find its factorial: ";
    cin >> userInput;

    int result = factorial(userInput);
    cout << "Factorial of " << userInput << " is: " << result << endl;

    return 0;
}
