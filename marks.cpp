#include <iostream>
using namespace std;
int main()
{
	int marks;

	cout<<"Enter marks:";
	cin>>marks;
	if (marks >= 60)
	{
		cout<<"1st division" <<endl;
	}
	else if (marks < 60 && marks >= 50)
	{
		cout<<"2nd division" <<endl;
	}
	else if (marks < 50 && marks >= 40)
	{
		cout << "3rd division" <<endl;
	}
	else
	{
		cout << "Fail" <<endl;
	}
}
