#include<iostream>
using namespace std;

int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int a = 10;
    int b = 30;
    int c = 40;
    int d = sum(a, b, c);  // Call the sum function and store the result in d
    cout << "Sum: " << d << endl;  // Print the result
    return 0;
}
