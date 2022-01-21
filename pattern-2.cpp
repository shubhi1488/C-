/*
    *
   * *
  * * *
 * * * *
* * * * *
print the pattern......
*/

#include<iostream>
using namespace std;
void HalfPyramid(int n){
	for(int i=1;i<=n;i++){
		for(int k=n-i;k>0;k--){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
		    cout<<"*";
			}
			
		
		cout<<"\n";
	}
}
int main(){
	int n;
	cout<<"enter a number:"<<"\n";
	cin>>n;
	HalfPyramid(n);
	return 0;
}
