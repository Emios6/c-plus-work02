#include<iostream>
using namespace std;
int prime(int x)
{
	int i;
	for(i=2;i<x;i++)
		if(x%i==0)
		return 0;
	return 1;
}
int main()
{
	int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}},i,j,k=0,p;
	cout<<"变换前的数组是："<<'\n';
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			cout<<a[i][j]<<'\t';
			cout<<endl;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			if(i<=j&&prime(a[i][j])==1&&a[i][j]!=2)
			{
				k++;
				for(p=1; ;p++)
					if(prime(a[i][j]+p)==1)
					{
						a[i][j]+=p;
						break;
					}
			}
			a[0][1]=3;
			a[0][0]=1;
	}	
		cout<<"转置后的数组："<<'\n';
			for(i=0;i<4;i++)
			{
				for(j=0;j<4;j++)
				cout<<a[i][j]<<'\t';
				cout<<endl;	 
			}
			cout<<"素数个数："<<k;
	return 0;
}
