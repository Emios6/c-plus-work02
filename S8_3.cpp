#include<iostream>
using namespace std;
int main()
{
	int a[10]={2,5,78,4,6,3,89,12,15,34};
	int j,max;
	int n=10;	
		max=0;
			for(j=1;j<n;j++)
			{
				if(a[j]>a[max])
				   max=j;					
			}
		
	cout<<"max="<<a[max]<<'\t';
	cout<<"maxindex="<<max<<endl;
	return 0;
}
