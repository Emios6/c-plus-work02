#include<iostream>
#include<cmath>
using namespace std;
double f1(double x)
{
	return 1.0/(2+sin(x));
}
double f2(double x)
{
	return 1.0/(2-cos(x));
}
double f3(double x)
{
	return (1+x)/(1+x*x);
}
double integral(double(*pf)(double),int n,double a,double b)
{
	double h;
	h=(b-a)/n;
	double result;
	result=(pf(a)+pf(b))/2;
	for(int i=1;i<n-1;i++)
		result=result=result+pf(a+i*h);
	result=result*h;
	return result;
}
int main(void)
{
	cout<<"f1(x):"<<'\t';
	cout<<"n=1000"<<'\t'<<integral(f1,1000,1.0,2.0)<<endl;
	cout<<"f2(x):"<<'\t';
	cout<<"n=2000"<<'\t'<<integral(f2,2000,2.0,3.0)<<endl;
	cout<<"f3(x):"<<'\t';
	cout<<"n=3000"<<'\t'<<integral(f3,3000,2.0,4.0)<<endl;
	return 0;
}
