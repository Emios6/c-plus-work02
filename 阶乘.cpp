#include<iostream>
using namespace std;
int main()
{
	int a=1,num,i;
	cout<<"请输入一个正整数：";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		a=a*i;
	}
	cout<<a;
	return 0;
}
