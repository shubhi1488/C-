//pattern - 3
#include<iostream>
using namespace std;
void HalfPyramid(int n){
	for(int i=n;i>=1;i--){
		for(int k=n-i;k>0;k--){
			cout<<" ";
		}
		for(int j=i;j>0;j--){
			cout<<"*";
		}
		cout<<"\n";
	}
}
int main(){
	int n;
	cout<<"enter a number";
	cin>>n;
	HalfPyramid(n);
	cout<<"\n";
	return 0;
}
