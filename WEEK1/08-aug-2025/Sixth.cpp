#include <iostream>
using namespace std;

int main() {
    
    cout << "FOR LOOP: Printing numbers from 1 to 5:\n";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << "\n\n";

    
    cout << "WHILE LOOP: Printing numbers from 5 to 1:\n";
    int j = 5;
    while (j >= 1) {
        cout << j << " ";
        j--;
    }
    cout << "\n\n";

 
    cout << "DO-WHILE LOOP: Printing numbers from 1 to 3:\n";
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 3);
    cout << "\n";

    return 0;
}
