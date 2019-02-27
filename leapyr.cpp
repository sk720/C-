//Wap for leap year
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter a Year:";
	cin>>year;
	if(year%4==0)
	{
		if(year%100==0){
			if(year%400==0)
			cout<<"This is Leap Year"<<year;
		else
		cout<<"This is not Leap year"<<year;
		} 
		else
		cout<<year<<"is a Leap year. ";
	}  
	else
	cout<<"is not a Leap year.";
	return 0;
}
