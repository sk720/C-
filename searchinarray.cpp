#include<iostream>
using namespace std;
int main()
{
	int A[5]={2,8,20,12,16};
	int key;
	cout<<"Enter key:";
	cin>>key;
	for(int i=0;i<5;i++){
		if(key==A[i])
		{
			cout<<"Found at:"<<i;
			exit(0);
		}
	
	}  
	  	cout<<"Not found";
}
