#include <iostream>
using namespace std;

int main() {
    int A,B;
    char operation;
    
    cout << "Simple Calculator" << endl;
    cout << "Enter first number: ";
    cin >> A;
    
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    
    cout << "Enter second number: ";
    cin >> B;
    
    switch(operation) {
        case '+':
            cout << "Result: " << A + B << endl;
            break;
        case '-':
            cout << "Result: " << A - B << endl;
            break;
        case '*':
            cout << "Result: " << A * B << endl;
            break;
        case '/':
           if (B != 0)
                cout << "Result: " << A / B << endl;
           else
               cout << "Error! Division by zero is not allowed." << endl;
            break;
    }
    return 0;
}
