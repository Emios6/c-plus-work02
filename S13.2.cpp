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
	cout<<"����������ת����ʮ��������";
	cin>>n;
	cout<<"����ת����ʮ������"<<n<<"ת��Ϊ���ٽ��Ƶ�����" ;
	cin>>r;
	fun1(s,n,r);
	fun2(s);
	cout<<"ʮ������"<<n<<"ת����"<<r<<"���Ƶ��������Ϊ"<<s<<endl;
	return 0; 
}
