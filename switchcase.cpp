#include<iostream>
using namespace std;
int main()
{
	char button;
	cout<<"Input a Character:";
	cin>>button;

	switch(button)
	{
		case'a':
		cout<<"Text 1"<<endl;
		break;

		case'b':
		cout<<"Text 2"<<endl;
		break;

		case'c':
		cout<<"Text 3"<<endl;
		break;

		default: //If any of the above is not entered then the output will be the one we have setted as default.
		cout<<"The Default Set"<<endl;

	}

	return 0;
}