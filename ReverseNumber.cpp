#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a Number";
	cin>>n;
	for(; n!=0; n=n/10){
		cout<<n%10;
		
	}
	return 0;
}