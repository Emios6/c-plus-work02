#include<iostream>
#include<cmath>
using namespace std;
class Tri
{
	private:
		double a,b,c;
	public:
		Tri(double x,double y,double z)
		{
			a=x;b=y;c=z;	
		}	
		double Peri()
		{
			return a+b+c;
		}
		double Area()
		{
			double p=(a+b+c)/2;
			return sqrt(p*(p-a)*(p-b)*(p-c)); 
		}
		display()
		{
			cout<<"面积是："<<Area()<<endl;
			cout<<"周长是："<<Peri()<<endl;	
		}
};
int main()
{
	Tri Tria(3,4,5);
	Tria.display();	
} 


