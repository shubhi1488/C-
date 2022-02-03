//program to print reversed number using recursion
#include<iostream>
using namespace std;
class Reverse{
	public:
		static void Rev(int num){
			if(num<10)//base case
			{
				cout<<num<<"\n";
				return;
			}
			else{
				cout<<num%10;
				//recursive function call
				Rev(num/10);
			}
		}
};
int main(){
	Reverse r;//creating the object of the class Reverse
	int num;
	cout<<"enter a number"<<"\n";
	cin>>num;
	cout<<"reversed number is:"<<"\n";
	r.Rev(num);//calling of static method to print the revered number
	return 0;
}
