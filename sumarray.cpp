#include<iostream>
using namespace std;
int main()
{
	int A[5]={2,8,10,12,16};
	int sum=0;
	for(int i=0;i<5;i++){
		sum=sum+A[i];
	}
	cout<<sum;
}
