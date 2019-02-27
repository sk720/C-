#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int v,u,a;
	float s;
	cout<<"Enter the 3 values:";
	cin>>u>>v>>a;
	s=(v*v-u*u)/(2*a);
	cout<<s<<endl;
	return 0;
}
