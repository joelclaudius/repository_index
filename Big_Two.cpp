#include<iostream.h>
int main( )
{
	int a,b,c;

	cout<<"Enter two integers: ";
	cin>>a>>b>>c;

	if ((a > b) && (a > c))
		cout<<"\nThe largest number is "<<a;
	else if ((b > a) && (b > c))
		cout<<"\nThe largest number is "<<b;
	else
		cout<<"\nThe largest number is "<<c;

	cout<<"\n\n";

	return 0;
}
