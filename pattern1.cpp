/* print the pattern-
*
* *
* * *
* * * *
* * * * *
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number:"<<"\n";
	cin>>n;
	//i is for number of lines which can be equal or less then n 
	for(int i=1;i<=n;i++){
		//j is for printing stars it is acc to i eg if i=2 their will be 2 stars.
		for(int j=1;j<=i;j++){
			cout<<"* ";
			
		}
		cout<<"\n";
		
	}
}
