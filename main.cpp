#include <iostream>
#include "Header.hpp"

using namespace std;

bool isValidOperator(char math_operation) {
    return (math_operation == '+' || math_operation == '-' || 
            math_operation == '*' || math_operation == '/');
}

float process(char math_operation, float a, float b) {
    float result = 0;
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
    float a;
    float b;
    cout << "----- [CALC] -----\nslang for calculator" << endl;
    cout << "-\n-\n-" << endl;
    cout << "which mathematical operation do you want to perform?\nchoose between: \n + for addition, \n - for subtraction, \n * for multiplication, \n / for division" << endl;
    cin >> math_operation;
    if (!isValidOperator(math_operation)) {
        cout << "i don't know that one, maybe try something else\n = use a valid operator!!!!!" << endl;
        system("pause");
        return 1; // Exit with error code
    }
    cout << "first number: ";
    cin >> a;
    cout << "second number: ";
    cin >> b;
    
    float result = process(math_operation, a, b);
    cout << "result: " << result << endl;
    system("pause");
    return 0;
}
