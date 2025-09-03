// Basic Calculator 
#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;

    cout << "Enter a number: ";
    cin >> num1;
    
    cout << "Enter another number: ";
    cin >> num2;
    
    cout << "Addition of the numbers is : " << num1 + num2 << endl;
    cout << "Difference of the numbers is : " << num1 - num2 << endl;
    cout << "Multiplication of the numbers is : " << num1*num2 << endl;
    cout << "Quitant after division is : " << num1/num2 << endl;
    cout << "Remainder after division is : " << num1%num2 << endl;
    
    return 0;
}
