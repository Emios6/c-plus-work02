#include<iostream>
#include<cmath>
using namespace std;
class Tri
{
	private:
		double a,b,c;
	public:
		void Setabc(double x,double y,double z)
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
};
int main()
{
	Tri Tria;
	Tria.Setabc(3,4,5); 
	cout<<Tria.Peri()<<endl;
	cout<<Tria.Area(); 	
} 


