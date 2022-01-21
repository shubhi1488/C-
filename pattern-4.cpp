//pattern-4
#include<iostream>
using namespace std;
void HalfPyramid(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i;
		}
		cout<<"\n";
	}
}
int main(){
	int n;
	cout<<"enter a number:";
	cin>>n;
	HalfPyramid(n);
	cout<<"\n";
	return 0;
}
