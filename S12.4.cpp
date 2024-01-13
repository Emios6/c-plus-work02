#include<iostream>
using namespace std;
float aver(int (*p)[4],int n)
{
	float sum=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n+1;j++)
		sum+=*(*(p+i)+j);
	sum=sum/n/4;
	return sum;
}
int max(int *p,int n)
{
	int q=*p;
	for(int i=1;i<n;i++)
		if(q<*(p+i))
			q=*(p+i);
	return q;
}
int min(int *p,int n)
{
	int q=*p;
	for(int i=1;i<n;i++)
		if(q>*(p+i))
			q=*(p+i);
	return q;
}
int main()
{
	int a[3][4]={{2,3,4,5},{12,13,14,15},{1,2,3,4}};
	float ave;
	int d,x;
	ave=aver(a,3);
	d=max(*a,12);
	x=min(*a,12);
	cout<<"ave="<<ave<<'\t'<<"max="<<d<<'\t'<<"min="<<x<<endl; 
	return 0;
} 
