#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,num,digit;
	cout<<"Enter the +ve  no.:";
	cin>>num;
	n=num;
	do
	{
	digit=	num%10;
	rev=(rev*10)+digit;
	num=num/10;
   }while(num!=0);
   cout<<"The reverse of the number is:"<<rev<<endl;
   if(n==rev)
      cout<<"The number is palindrome";
      else
      cout<<"The nubmer is not palindrome";
	
}
