#include<iostream>
using namespace std;
int main()
{
	int a[99];
	int i;
	for(i=0;i<=98;i++)
		a[i]=i+2;
	for(i=0;i<=98;i++)
	{
		if(a[i]==2||a[i]==3||a[i]==5||a[i]==7)
			cout<<a[i]<<'\t';
		if(a[i]%2==0||a[i]%3==0||a[i]%5==0||a[i]%7==0)
			a[i]=0;
	}
	for(i=0;i<=98;i++)
	{
		if(a[i])
		cout<<a[i]<<'\t'; 
	}
	return 0;
}

