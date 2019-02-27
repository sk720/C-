//WAP to calculate Net salary program should take the following as input:
//1)Basic salary 2)Percentage of allowances 3)Percentage of deductions
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float basic;
	float percentAllow;
	float percentDeduct;
	float netSalary;
	cout<<"Enter Basic salary:";
	cin>>basic;
	cout<<"Enter percent of Allowances:";
	cin>>percentAllow;
	cout<<"Enter percent of deducton:";
	cin>>percentDeduct;
	netSalary=basic+basic*percentAllow/100-basic*percentDeduct/100;
	cout<<"Net Salary is:"<<netSalary<<endl;
	
}
