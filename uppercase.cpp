#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	int a=ch;
	if(a>=65 && a<=90){
		cout<<"Uppercase";
	}
	else if(a>=97 && a<=122){
		cout<<"LowerCase";
	}
	cout<<endl;
    return 0;
}