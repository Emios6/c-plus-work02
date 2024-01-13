#include<iostream>
using namespace std;
int qy(int n)
{
	int x=1;
	for(int i=2;i<=n;i++)
		x=x*i;
	return x;
}
int main()
{	
	int t;
	int num=1;
	cin>>t;
	for(int i=t;i>=2;i--)
		num=num+qy(i);
	cout<<num;
}
