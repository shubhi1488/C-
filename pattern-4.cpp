//pattern-4
/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
print the pattern........
*/
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
