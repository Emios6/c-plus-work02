#include<iostream>
using namespace std;
int main()
{
	char str[100];
	int count=1;
	cin.getline(str,100);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' '||str[i]=='\n'||str[i]==',')
			count++;
	}
	cout<<"������Ϊ��"<<count<<endl;
	return 0; 
}
