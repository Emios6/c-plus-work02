#include<iostream>
using namespace std;
int main()
{
	int a,b=0,c=0;
	cout<<"������һ��������5λ����������";
	cin>>a;
	while(a)
	{
		c=c+a%10;
		a=a/10;
		b++; 
	}
	cout<<"λ��Ϊ��"<<b<<endl;
	cout<<"λ����Ϊ��"<<c<<endl;
	return 0; 
}
