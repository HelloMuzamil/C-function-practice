#include<iostream>
using namespace std;
int factorial(int num1) {
    int fact = 1; 
    for (int i = 1; i <= num1; i++) {
        fact *= i;
    }
    return fact; 
}
int main(){
	int n;
cout<<"Enter number : ";
cin>>n;
cout<<"Factorail of "<<n <<"  is "<<factorial(n);
}
