//wap for display sum of digits of a number
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,r;
	cout<<"Enter a no.:";
	cin>>n;
	while(n!=0){
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	cout<<sum;
}
