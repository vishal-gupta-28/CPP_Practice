#include <iostream>
#include <climits>
int main() {
    int nums[] = {10, 23, 65, 87, 88};
    int size = 5;

    int largest = INT_MIN;

    for (int i = 0; i < size; i++){
        if (nums[i] > largest ){
            largest  = nums[i];
        }
    }

    cout << " The largest number is: " << largest << endl;

    return 0;
}