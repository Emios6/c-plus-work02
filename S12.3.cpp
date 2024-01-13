#include<iostream>
#include<cmath>
using namespace std;
float aver(int a[],float x)
{
	float sum=0;
	float p;
	for(int i=0;i<x;i++)
		sum=sum+a[i];
	p=sum/x;
	return p;
}
int max(int a[],int x)
{
	float sum=0,ave=aver(a,x);
	float max;
	int q;
	for(int i=0;i<16;i++)
	sum+=a[i];
	max=fabs(ave-a[0]);
	int p=0;
	for(int i=1;i<16;i++)
		if(fabs(ave-a[i])>max)
		{
			max=fabs(ave-a[i]);
			p=i;
		}
	cout<<"最大的是："<<a[p]<<endl;
	for(int i=p;i<15;i++)
		a[i]=a[i+1];
	for(int i=0;i<15;i++)
		cout<<a[i]<<'\t';
	return 0; 
}

int main()
{
	int a[16];
	a[0]=55;
	int count=0;
	cout<<"a数组元素：\n";
	for(int i=1;i<16;i++)
	{
		a[i]=(15*a[i-1]+97)%256;
	}
	for(int i=0;i<16;i++)
	{
		count++;
		cout<<a[i]<<'\t';
		if(count%5==0)
			cout<<endl;
	}
	cout<<endl;
	cout<<"平均值是："<<aver(a,16)<<'\n';
	max(a,16);
	return 0;	 
}
