#include <iostream>
using namespace std;

double toDouble(const string& str) {
    int position = 0;
    int length = static_cast<int>(str.length());

    double baseNumber = 0.0;
    double fraction = 0.0;
    int sign = 1;
    bool decimalPoint = false;
    double divisor = 10.0;

    while (position < length && str[position] == ' ') {
        position++;
    }

    if (position >= length) {
        return 0.0;
    }

    if (str[position] == '-') {
        sign = -1;
        position++;
    } else if (str[position] == '+') {
        position++;
    }

    while (position < length) {
        char character = str[position];

        if (character >= '0' && character <= '9') {
            if (!decimalPoint) {
                baseNumber = baseNumber * 10 + (character - '0');
            } else {
                fraction += (character - '0') / divisor;
                divisor *= 10;
            }
        } 
        else if (character == '.') {
            if (!decimalPoint) {
                decimalPoint = true;
            } else {
                break;
            }
        } 
        else {
            break;
        }

        position++;
    }

    return sign * (baseNumber + fraction);
}

int main() {
    string input;
    cout << "Enter a number string: ";
    cin >> input;

    double value = toDouble(input);
    cout << "Converted float: " << value << endl;

    return 0;
}
