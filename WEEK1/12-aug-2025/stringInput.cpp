#include <iostream>

using namespace std;

int main()
{
    string firstName;
    string lastName;

    cout << "Enter your First Name :" << endl; 
    cin >> firstName;

    cout << "Enter your Last Name : " << endl;
    cin >> lastName;

    cout << "Hello Mr. " << firstName + " " + lastName << " Welcome you Onboard.!!" << endl;

    return 0;
}
