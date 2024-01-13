#include<iostream>
using namespace std;
int main()
{
	static int a[]={5,26,98,77,1,27,30};
	int b[10]={0};
	int n,t,i;
	n=sizeof(a)/sizeof(int);
	for(i=0;i<n;i++)
		cout<<a[i]<<'\t';
	cout<<endl;
	for(i=0;i<n;i++)
	{
		while(a[i])
		{
			t=a[i]%10;
			b[t]=b[t]+1;
			a[i]=a[i]/10;
		}
	}
	for(i=0;i<10;i++)
		cout<<i<<"£º"<<b[i]<<"´Î"<<'\t';
	return 0;
}
