#include<iostream>
const int N=100;
using namespace std;
int num=-1;
void f(float a[],float x)
{
	num=num+1;
	int i;
	int n=num-1;
	for(i=n;i>=0;i--)
		if(a[i]>x)
			a[i+1]=a[i];
		else 
			break;
    a[i+1]=x;
}
int main()
{
	float a[N];
	int p;
	int i=0;
	cout<<"���������ݣ���0��������\n";
	cin>>p;
	a[0]=p;
	while(p)
	{
		i++;
		f(a,p);
		for(int j=0;j<i;j++)
		cout<<a[j]<<'\t';
		cout<<endl;
		cout<<"���������ݣ�\n";
		cin>>p;
	}
	 return 0;
}

