#include<iostream>
using namespace std;
int main()
{
	int A[5]={2,8,20,12,16};
	int max=-32768;
	for(int i=0;i<5;i++){
		if(A[i]>max)
		max=A[i];
	}
	cout<<max;
}
