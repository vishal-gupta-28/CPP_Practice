#include <iostream>
using namespace std;

int sumUpTo(int limit) {
    if (limit == 0)
        return 0;
    return limit + sumUpTo(limit - 1);
}

int main() {
    int userLimit;
    cout << "Enter the limit to find the sum up to: ";
    cin >> userLimit;

    int totalSum = sumUpTo(userLimit);
    cout << "Sum of natural numbers from 1 to " << userLimit << " is: " << totalSum << endl;

    return 0;
}
