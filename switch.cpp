#include <iostream>
using namespace std;
int main()
{
	int i;
	for(i = 0; i < 6; i++)
		switch(i)
		{
			case 0:
				cout << "i is zero"<<endl;
				break;
			case 1:
				cout << "i is one"<<endl;
				break;
			case 2:
				cout << "i is two"<<endl;
				break;
			case 3:
				cout << "i is three"<<endl;
				break;
			default:
				cout << "i is greater than 3"<<endl;
				break;
		}
	return 0;
}
