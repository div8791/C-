#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	//increasing star pattern
	for(int row=1; row<=n; row++){
		for(int spaces=1; spaces<=n-row; spaces++){
			cout<<' ';
		}
		for(int star=1; star<=2*row-1; star++){
			cout<<'*';
		}
		cout<<endl;
	}
	//decreasing star pattern
	for(int row=1; row<=n-1; row++){
		for(int spaces=1; spaces<=row; spaces++){
			cout<<' ';
		}
		for(int star=1; star<=2*(n-row)-1; star++){
			cout<<'*';
		}
		cout<<endl;
	}
	return 0;
}