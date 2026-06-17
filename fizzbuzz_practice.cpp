# include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"please enter a positive integer\n";
	cin>> n ;


	for (int i=1; i<=n; i++)
	 
	if ( i%3==0 )
	 
	cout<<"fizz\n";
	else if ( i%5==0 )
	cout<<"buzz\n";
	else if ( i%3==0 && i%5==0 )
	cout<<"fizzbuzz\n";	 
		else					
			cout<<i<<endl;		











}