#include<iostream>
using namespace std;

int add(int num1, int num2) {
    return num1 + num2;
}
int mul(int num1, int num2) {
    return num1 * num2;
}
int divide(int num1, int num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Error: Division by zero" << endl;
        return 0; // Return 0 as an indication of error
    }
}
int main() {
    int a, b;
    int choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Press 1 for Addition, 2 for Multiplication, 3 for Division: ";
    cin >> choice;
switch (choice) {
        case 1:
            cout << "Result of Addition: " << add(a, b) << endl;
            break;
        case 2:
            cout << "Result of Multiplication: " << mul(a, b) << endl;
            break;
        case 3:
            cout << "Result of Division: " << divide(a, b) << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}

