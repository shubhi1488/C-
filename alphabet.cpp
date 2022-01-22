#include<iostream>
using namespace std;
void HalfPyramid(int n){
	for(int i=1;i<=n;i++){
		char alphabet='a';
		for(int j=1;j<=i;j++){
			cout<<alphabet++;
		}
		cout<<"\n";
	}
}
/*void Pyramid(int n){
	for(int i=n;i>=1;i--){
		char alpha='z';
		for(int j=i;j>=1;j--){
			cout<<alpha--;
		}
		cout<<"\n";
	}
}*/
int main(){
	int n;
	cout<<"enter a number";
	cin>>n;
	HalfPyramid(n);
	//Pyramid(n);
	cout<<"\n";
	return 0;
}
