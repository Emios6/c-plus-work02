#include<iostream>
#include<cstring>
using namespace std;
void fun1(char *s,int n,int r)
{
	int i=0,t;
	while(n)
	{
		t=n%r;
		if(t>=10)
			s[i++]=t-10+'A';
		else
			s[i++]=t+'0';
		n=n/r;
	}
	s[i]='\0';
}
void fun2(char *s)
{
	char ch;
	int len=strlen(s);
	for(int i=0;i<len/2;i++)
	{
		ch=s[i];
		s[i]=s[len-i-1];
		s[len-i-1]=ch;
	}
}
int main()
{
	char s[200];
	int n,r;
	cout<<"请输入您想转换的十进制数：";
	cin>>n;
	cout<<"您想转换的十进制数"<<n<<"转换为多少进制的数？" ;
	cin>>r;
	fun1(s,n,r);
	fun2(s);
	cout<<"十进制数"<<n<<"转换成"<<r<<"进制的数，结果为"<<s<<endl;
	return 0; 
}
