#include <iostream>
#include <climits>

int main() {

    int nums[] = { 10, 30, 2 , -2 , 56};
    int size = 5;

    int smallest = INT_MAX;

    for(int i = 0; i < size; i++){

        if (nums[i] < smallest){
            smallest = nums[i];
        }
    }

    cout << " The smallest number is : " << smallest << endl;
}