//Wap for GCD of two numbers
#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter two no.";
	cin>>m>>n;
	while(m!=n){
		if(m>n)
		m=m-n;
		else if(n>m)
		n=n-m;
	}
	cout<<"GCD is:"<<m;
//	cout<<"GCD is:"<<n;  We can write because of lastly m and n equals
}
