#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int row=1, col, number=1;
	while(row<=n){
		col=1; 
		while(col<=row){
			cout<<number;
			col++;
			number++;

		}
		cout<<endl;
		row++;
	}
	return 0;
}