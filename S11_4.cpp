#include<iostream>
#include<cstring> 
using namespace std;
int main()
{
	char str[100];
	char max[100]="";
	char str1[100];
	int b;
	cout<<"Input a string:\n";
	cin.getline(str,100);
	for(int i=0;str[i]!='\0';i++)
	{
		b=0;
		while(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
		{
			str1[b++]=str[i++];
		}
		if(b!=0)
		{
			str1[i]=0;
			if(strlen(str1)>strlen(max))
				strcpy(max,str1);
		}
	}
	cout<<"最长的单词是："<<max<<endl;
	return 0; 
	
}
