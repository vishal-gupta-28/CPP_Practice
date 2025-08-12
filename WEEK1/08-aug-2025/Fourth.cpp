#include <iostream>
using namespace std;

int main() {
    int marks;
    char appeared;


    cout << "Did the student appear for the exam? (Y/N): ";
    cin >> appeared;

    if (appeared == 'Y' || appeared == 'y') {  
        cout << "Enter the student's marks (0 to 100): ";
        cin >> marks;

      
        if (marks >= 40) {
            
            char grade;
            if (marks >= 90) {
                grade = 'A';
            } else if (marks >= 75) {
                grade = 'B';
            } else if (marks >= 60) {
                grade = 'C';
            } else {
                grade = 'D';
            }

            cout << "Student passed with Grade: " << grade << endl;

            
            switch (grade) {
                case 'A':
                    cout << "Excellent performance!" << endl;
                    break;
                case 'B':
                    cout << "Very good. Keep it up!" << endl;
                    break;
                case 'C':
                    cout << "Good. Try to improve more." << endl;
                    break;
                case 'D':
                    cout << "You passed. Work harder next time." << endl;
                    break;
                default:
                    cout << "Invalid grade." << endl;
            }

        } else {
            cout << "Student failed the exam." << endl;
        }

    } else {
        cout << "Student did not appear for the exam." << endl;
    }

    return 0;
}
