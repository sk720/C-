//Wap for factorial of given number
#include<iostream>
using namespace std;
int main()
{
	int fact=1,n;
	cout<<"Enter The value of n:";
	cin>>n;
	for(int i=1;i<=n;i++){
	fact=fact*i;
}
cout<<fact;
return 0;
}
