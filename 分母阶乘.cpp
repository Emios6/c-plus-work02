#include<iostream>
using namespace std;
int main()
{
	double e=1.0,t=1.0;
	int x;
	cin>>x;
	for(int i=1;i<x;i++)
	{
		t=t/x;
		e=e+t;
	}
	cout<<e;
}
