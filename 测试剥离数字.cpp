#include<iostream>
using namespace std;
int main()
{
	int a,s;
	cin>>a;
	while(a)
	{
		s=a%10;
		a=a/10;
	
	cout<<s<<'\t';
	}
	return 0;
}
