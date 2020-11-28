#include<iostream>
using namespace std;
int main()
{
	int N, no, i;
	cin>>N;
	no=2;
	while(no<N){
		i=2;
		while(i<=no-1){
			if(no%i==0){
				break;
			}
			i++;
		}
		if(i==no){
			cout<<no<<' ';
		}
		no++;
	}
	cout<<endl;
	return 0;
}