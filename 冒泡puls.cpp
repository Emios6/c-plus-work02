#include<iostream>
using namespace std;
void BubbleSort(int arr[],int size)
{
	int i,j,t;
	for(i=0;i<size;i++)
		for(j=0;j<size-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	for(i=0;i<size;i++)
		cout<<arr[i]<<'\t';
}
int main()
{
	int a[10];
	for(int i;i<10;i++)
		cin>>a[i];
	BubbleSort(a,10);
	return 0;
}
