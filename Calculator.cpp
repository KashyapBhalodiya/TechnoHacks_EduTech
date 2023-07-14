#include <bits/stdc++.h>

using namespace std;

int main() {

    char operation;
    float num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    
    // here we check if the enter number is not an integer 
    // then it will show error message.
    if (cin.fail()) {
        cout << "Error: Invalid input. Please write valid input data." << endl;
        return 0;
    }
    cout << "Enter an arithmetic operation (+, -, *, /): ";
    cin >> operation;
    if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
        cout << "Enter the second number: ";
        cin >> num2;
        if (cin.fail()) {
            cout << "Error: Invalid input. Please write valid input data." << endl;
            return 0;
        }
        
        float result;
        // arithmetic choice
        switch (operation) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    cout << "Error: Division by zero is not allowed." << endl;
                    return 0;
                }
                break;
            default:
                cout << "Error the values it is only numbers" << endl;
                return 0;
        }
        cout << "The result is: " << result << endl;
    } else {
        cout << "Error: Invalid input. Please write valid input data." << endl;
    }
    
    return 0;
}