#include<iostream>
using namespace std;
void max(int num1,int num2){
	
	if(num1>num2)
		cout<<"Number  " <<num1<< " is Greater ";
	else {
		cout<<"Number " <<num2<< "is Greater ";
	}

}
int main(){
	int a,b;
cout<<"Enter two numbers: ";
cin>>a>>b;
max(a,b);
}
