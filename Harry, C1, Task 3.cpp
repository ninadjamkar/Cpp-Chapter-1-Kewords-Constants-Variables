#include<iostream>
using namespace std;
int main()
{
    float tc;
    float tf;
    
    cout<<"Enter temperature in degree celcius: ";
    cin>>tc;
    tf=tc*1.8 + 32;
    cout<<"The same temperature in degree fahrenheit is: "<<tf<<endl;
    
    return 0;
}


OUTPUT - 
Enter temperature in degree celcius: 38
The same temperature in degree fahrenheit is: 100.4
