#include<iostream> 
using namespace std;
int main()
{
	int a[10]={10,9,8,7,6,5,4,3,2,1};
	int i,j,t;
	int n=10;
	for(i=0;i<10;i++)
		for(j=0;j<10-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	for(i=0;i<n;i++)
		cout<<a[i]<<'\t'; 

}
