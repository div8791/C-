#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i;
	for(i=2; i<=n-1; i++){
		if(n%i==0){
			cout<<"Not Prime";
			return 0;
			cout<<endl;
		}

	}
    cout<<"Prime";
    cout<<endl;
    
    return 0;
}