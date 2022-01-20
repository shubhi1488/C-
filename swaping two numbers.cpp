//program to swap two numbers
#include<iostream>
using namespace std;
int main(){
	int a=10;
	int b=20;
	int temp;
	cout<<"numbers before swapping is:"<<"\n"<<"value of a:"<<a<<"\n"<<"value of b:"<<b<<"\n";
	temp=a;
	a=b;
	b=temp;
	cout<<"numbers after swapping are:"<<"\n"<<"value of a:"<<a<<"\n"<<"value of b:"<<b<<"\n";
	return 0;
}
