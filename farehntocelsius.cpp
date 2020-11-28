#include<iostream>
using namespace std;
int main()
{
	int init, final, step;
	cin>>init>>final>>step;
	for(int farehn=init; farehn<=final; farehn=farehn+step){
		int c=5.0/9*(farehn-32);
		cout<<farehn<<' '<<c<<endl;
	}
	return 0;
}