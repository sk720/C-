//Wap for prime number
#include<iostream>
using namespace std;
int main()
{
	int i,n,count=0;
	cout<<"Enter a no.:";
	cin>>n;
	for(i=1;i<=n;i++){
		if(n%i==0)
		{
			count++;
		}
		
	}
	if(count==2)
	cout<<"prime";
	else
	cout<<"Not prime";
}
