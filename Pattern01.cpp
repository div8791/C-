#include<iostream>
using namespace std;
int main()
{
	int n, row, col, i;
	cin>>n;
	for(row=1; row<=n; row++){
		if(row%2==0){
			i=0;
		}
		else{
			i=1;
		}
		for(col=1; col<=row; col++){
			cout<<i<<' ';
			i=1-i;
		}
		cout<<endl;
	}
	return 0;
}