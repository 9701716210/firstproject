//area of circle
#include<iostream>
using namespace std;
float area(int r,const float pi=3.14);
int main()
{
	int r;
	cout<<"Enter the radius:";
	cin>>r;
	cout<<"The area of the circle is:"<<area(r);
        cout<<"The area of the circle is:"<<area(r);
	
}
float area(int r,const float pi)
{
	return pi*r*r;
}
