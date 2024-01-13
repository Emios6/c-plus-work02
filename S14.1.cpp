#include<iostream>
#include<cmath>
using namespace std;
class Tri
{
	double a,b,c;
public:
	Tri(double x,double y,double z)
	{
		a=x;b=y;c=z;
	}
	double Peri()
	{
		return (a+b+c);
	}
	double Area()
	{
		double s=Peri()/2;
		double area=sqrt(s*(s-a)*(s-b)*(s-c));
		return area;
	}
	void show()
	{
		cout<<"三角形的边长："<<'\t'<<a<<'\t'<<b<<'\t'<<c<<endl;
		cout<<"三角形的周长："<<Peri()<<endl;
		cout<<"三角形的面积："<<Area()<<endl; 
	}
};
int main()
{
	Tri tri1(3,4,5),tri2(5,6,7);
	tri1.show() ;
	tri2.show() ;
	return 0;
}
