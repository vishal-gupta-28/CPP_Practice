#include <iostream>
#include <string>
using namespace std;

int main() {
    string password, confirmPassword;

    cout << "Enter password: ";
    cin >> password;
    cout << "Confirm password: ";
    cin >> confirmPassword;

    if (password == confirmPassword) {
        cout << "Password confirmed!" << endl;
    } else {
        cout << "Passwords do not match!" << endl;
    }
    return 0;
}
