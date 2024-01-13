#include<iostream>
#include<cmath> 
using namespace std;
class Ctriangle
{
	double a,b,c;
	public:
		Ctriangle(double x,double y,double z)
			{a=x;b=y;c=z;}
		Getperimeter()
			{return a+b+c;}
		GetArea()
			{
				double p;
				p=(a+b+c)/2;
				return sqrt(p*(p-a)*(p-b)*(p-c));
			}
		display()
		{
			cout<<"面积是："<<GetArea()<<endl;
			cout<<"周长是："<<Getperimeter()<<endl;	
		}
};
int main()
{
	Ctriangle Ctriangle1(3,4,5);
	Ctriangle1.display();
	return 0;
}

