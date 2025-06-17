#include <iostream>
#include "Header.hpp"

using namespace std;

int process(char math_operation, int a, int b) {
    int result = 0;
    if (math_operation == '+') {
        result = add(a, b);
    }
    else if (math_operation == '-') {
        result = subtract(a, b);
    }
    else if (math_operation == '*') {
        result = multiply(a, b);
    }
    else if (math_operation == '/') {
        result = divide(a, b);
    }
    return result;
}

int main() {
    char math_operation;
    int a;
    int b;
    cout << "----- [CALC] -----\nslang for calculator" << endl;
    cout << "-\n-\n-" << endl;
    cout << "which mathematical operation do you want to perform?\nchoose between: \n + for addition, \n - for subtraction, \n * for multiplication, \n / for division" << endl;
    cin >> math_operation;
    cout << "first number: ";
    cin >> a;
    cout << "second number: ";
    cin >> b;
    
    int result = process(math_operation, a, b);
    cout << "result: " << result << endl;
    
    return 0;
}