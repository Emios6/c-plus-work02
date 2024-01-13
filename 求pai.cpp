#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b=0,c,n=1.0,d=0,pai,m=1;
	while(fabs(m)>1e-5)
	{
		a=pow(-1,b);
		m=1/n;
		c=a*m;
		d=d+c;
		n=n+2;
		b++;
	}
	pai=4*d;
	cout<<pai<<endl;
	return 0;
}
