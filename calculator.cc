/**
 *   @file: calculator.cc
 * @author: Allison McKee
 *   @date: 02-04-2024
 *  @brief: A simple calculator program.
 */

#include <iostream>

using namespace std;

int main(){
    // Declare necessary variables
    double num1, num2, result;
    char operation;

    // Get user input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculations
    switch(operation){
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
            if(num2 != 0){
                result = num1 / num2;
            } 
            else{
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;  // Exit program with an error code
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1;  // Exit program with an error code
    }

    // Display the result
    cout << "Result: " << result << endl;

    // Exit program
    return 0;
}