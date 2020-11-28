#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int row=1; row<=n; row++){
		for(int space=1; space<=n-row; space++){
			cout<<' ';
		}
		for(int number=1; number<=2*row-1; number++){
			cout<<number;
		}
		cout<<endl;
	}
	for(int row=1; row<=n-1; row++){
		for(int space=1; space<=row; space++){
			cout<<' ';
		}
		for(int number=1; number<=2*(n-row)-1; number++){
			cout<<number;
		}
		cout<<endl;
	}
	return 0;

}
