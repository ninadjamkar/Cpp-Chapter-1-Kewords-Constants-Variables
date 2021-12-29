#include<iostream>
using namespace std;
int main()
{
  float pi=3.142;
  float r;
  float h;
  float A1;
  float A2;
  
  cout<<"Enter radius of the circle: ";
  cin>>r;
  A1=pi*r*r;
  cout<<"The area of circle is: "<<A1<<" sq units"<<endl;
  cout<<""<<endl;
  cout<<"Enter height of the cylinder: ";
  cin>>h;
  A2=2*pi*r*h + 2*pi*r*r;
  cout<<"The area of cylinder is: "<<A2<<" sq units"<<endl;
  
  return 0;
}


OUTPUT -
Enter radius of the circle: 7.5
The area of circle is: 176.738 sq units

Enter height of the cylinder: 5.4
The area of cylinder is: 607.977 sq units

