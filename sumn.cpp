//Sum of n natural number.
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int n,sum=0;
cout<<"Enter a no.:";
cin>>n;
for(int i=1;i<=n;i++){
	sum=sum+i;
}
cout<<sum;
return 0;
	
}
