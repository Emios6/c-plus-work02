#include<iostream>
using namespace std;
int main()
{
	int i,j,m=55;
	for(i=1;i<=3;i++)
	for(j=3;j<=i;j++)
	m=m%j;
	cout<<m<<endl;
	return 0;
}
