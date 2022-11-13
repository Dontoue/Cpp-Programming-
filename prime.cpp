#include <iostream>
using namespace std;
int main()
{
	int n, i;
	cout << "Enter a number:";
	cin >> n;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			cout << "Number is not prime:" <<endl;
			break;
		}
	}
	if (n == i)
		cout << "Number is prime" <<endl;
		return 0;
}
