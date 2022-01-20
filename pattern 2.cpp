/* pattern 2
* * * * *
* * * *
* * *
* *
*

*/
#include<iostream>
using namespace std;
void halfPyramid(int n){
	for(int i=n;i>=1;i--){
		for(int j=i;j>0;j--){
			cout<<"*";
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cout<<"enter the number:"<<"\n";
	cin>>n;
	halfPyramid(n);
	cout<<"\n";
}
