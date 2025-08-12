#include <iostream>
#include <string>
using namespace std;

int main() {
    string user1, user2, user3;

    cout << "Enter first username: ";
    cin >> user1;
    cout << "Enter second username: ";
    cin >> user2;
    cout << "Enter third username: ";
    cin >> user3;

    if (user1 == user2 || user1 == user3 || user2 == user3) {
        cout << "usernames are already taken!" << endl;
    } else {
        cout << "All usernames are unique!" << endl;
    }
    return 0;
}
