#include <iostream>
#define PI 3.142
using namespace std;
int main ()
{
	double radius;
	cout<<"Enter radius:";
	cin>>radius;
	double circ = (PI * radius * 2);
	cout<<"Radius is "<< radius <<" circumference is "<< circ <<endl;
	return 0;
}
