#include <iostream>
using namespace std;

int addition(int a, int b){

    return a+b;
}

inline int square( int a) {
    
    return a*a;
}

int substract (int a, int b){
    
        return a-b;
    }
 

   

void print (int a) {

    cout << " The value of a is : " << a << endl;
}

int addition (int a, int b, int c) {

    return a+ b+ c;
}
double addition (int a, int b, int c) {

    return a+ b+ c;  
}

float addition (int a, float b, double c){
    return a+b+c;
}

int factorial (int n) {
    if (n <=1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

int main() {
   int a = 10,  n= 5;
   float b= 15.9 , c= 19.9 ;

    int result = substract(5,6);
        cout << " The result of substraction is: " << result << endl;



   cout << " Addition of the numbers are :" << addition(a,b) << endl;
   cout << "Square of the number is : " << square(a) << endl;
   print(a);
    cout << " Addition of the numbers are :" << addition(a,b,c) << endl;
   cout << " Addition of the numbers are :" << addition(a,b,c) << endl;
   cout << " Addition of the numbers are :" << addition(a,b,c) << endl;
   cout << " Addition of the numbers are :" << addition(a,b,c) << endl;
   cout << "factorial of the number is : " << factorial(n) << endl;


}