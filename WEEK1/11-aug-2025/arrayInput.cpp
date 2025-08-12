#include <iostream>
using namespace std;

int main() 
{
    int size =5;
    int marks[size];

    cout << " Enter the amrks of the 5 students: " << endl;
    for (int i =0 ; i < size; i++){


    cin >> marks[i];
    }
for (int i = 0; i < size; i++){

    cout << " Marks of the students are: " << marks[i] << endl;
}

}