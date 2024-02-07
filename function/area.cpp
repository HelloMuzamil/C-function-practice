#include<iostream>
using namespace std;
int area(int length,int width){
	int area=length*width;
cout<<"Your area is: "<<area;
}
int main(){
int a;
cout<<"Enter the length: ";
cin>> a;
int b;
cout<<"Enter the width: ";
cin>>b;
area(a,b);

}
