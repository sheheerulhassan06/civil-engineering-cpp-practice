#include <iostream>
using namespace std;

int main()
{
	int  p, l, x;
	
	cout<<"P(Load at end in kN)=";
	cin>> p;
	
	cout<<"l(Total length in meters)=";
	cin>>l;
	
	cout<<"X(Distance from wall)=";
	cin>>x;
	
	int m= p*(l-x);
	
	cout<<m;
		
}