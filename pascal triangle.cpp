/*
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
print the pattern......
*/
#include<iostream>
using namespace std;
void PascalTriangle(int n){
	for(int i=1;i<=n;i++){
		int coeff=1;
		for(int k=n-i;k>0;k--){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<coeff<<" ";
			coeff=coeff*(i-j)/j;
		}
		cout<<"\n";
	}
}
int main(){
	int n;
	cout<<"enter a number";
	cin>>n;
	PascalTriangle(n);
	cout<<"\n";
	return 0;
}
