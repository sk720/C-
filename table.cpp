//Wap for multiplication table
#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter the table no.you want:";
	cin>>n;
	for(i=1;i<=10;i++){
		cout<<n<<"x"<<i<<"="<<i*n<<endl;
	}
	return 0;
}
