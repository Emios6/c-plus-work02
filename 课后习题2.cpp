#include<iostream>
using namespace std;
int main()
{
	int a,b=0,c=0;
	cout<<"请输入一个不多于5位的正整数：";
	cin>>a;
	while(a)
	{
		c=c+a%10;
		a=a/10;
		b++; 
	}
	cout<<"位数为："<<b<<endl;
	cout<<"位数和为："<<c<<endl;
	return 0; 
}
