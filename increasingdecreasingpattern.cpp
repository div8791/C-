#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int row=1,i,z;

	while(row<=n){
		i=1;
		while(i<=n-row){
			cout<<' ';
			i++;
		}

        i=1; z=row; 
		while(i<=row){
			cout<<z;
			z++;
			i++;
		}
		i=1; z=2*row-2;
		while(i<=row-1){
			cout<<z;
			z--;
			i++;
		}
		row++;
		cout<<endl;
	}
     return 0;
}