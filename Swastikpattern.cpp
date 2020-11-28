#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	//upper part
	//first row-
	cout<<'*';
	for(int space=1; space<=n-2; space++){
		cout<<' ';
	}
	for(int stars=1; stars<=n; stars++){
		cout<<'*';

	}
	cout<<endl;
	
	//next rows
	for(int row=1; row<=n-2; row++){
		cout<<'*';
		for(int space=1; space<=n-2; space++){
			cout<<' ';
		}
		cout<<'*';
		cout<<endl;
	}
	
	//separation row
	for(int star=1; star<=2*n-1; star++){
		cout<<'*';
	}
	cout<<endl;
	//lower part
	for(int row=1; row<n-2; row++){
		for(int space=1; space<=n-1; space++){
			cout<<' ';
		}
		cout<<'*';
		for(int space=1; space<=n-2; space++){
			cout<<' ';
		}
		cout<<'*';
		cout<<endl;
	}
	//last row
	for(int star=1; star<=n; star++){
		cout<<'*';
	}
	for(int space=1; space<=n-2; space++){
		cout<<' ';
	}
	cout<<'*';
	cout<<endl;

	return 0;
}