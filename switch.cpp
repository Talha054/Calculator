// Program to build a simple calculator using switch Statement in C++
#include <iostream>
using namespace std;

int main()
 {
    char choice;
    float num1, num2;

    while(1)
    {
        cout << "Enter an operator (+, -, *, /) OR Enter x for exit \n";
        cin >> choice;
        if (choice == 'x')
        {
            exit(0);
        }
    
    
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (choice) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }
    }

    return 0;
}