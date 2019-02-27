//wap for digits of a number
#include<iostream>
using namespace std;
int main()
{
	int r,n;
	cout<<"Enter the no.:";
	cin>>n;
	
	while(n!=0)
	{
		r=n%10;
	cout<<r;
	n=n/10;
	}
}
