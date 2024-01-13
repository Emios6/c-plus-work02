#include<iostream>
using namespace std;
int main()
{
	int a[6]={2,4,5,7,8,9},i,j,x;
	cout<<"请输入要删除的数据：";
	cin>>x;
	for(i=0;i<6;i++)
	{
		if(a[i]==x)
		{
		for(j=i;j<5;j++)
			a[j]=a[j+1];
		break;
		}
	}
	if(i==6)
		cout<<"not number\n";
	else
	{
		for(i=0;i<5;i++)
			cout<<a[i]<<'\t';
			cout<<endl;
	}
	return 0;
}
