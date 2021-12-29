#include<iostream>
using namespace std;
int
main ()
{
  float l;
  float b;
  float area;

  cout << "Enter length of the rectangle: ";
  cin >> l;
  cout << "Enter breadth of the rectangle: ";
  cin >> b;

  area = l * b;
  cout << "Area of the rectangle: " << area << " sq units" << endl;

  return 0;
}


OUTPUT -
Enter length of the rectangle: 12.5
Enter breadth of the rectangle: 8.6
Area of the rectangle: 107.5 sq units
