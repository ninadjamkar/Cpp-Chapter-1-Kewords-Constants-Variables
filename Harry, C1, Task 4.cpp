#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int p;
    float r;
    float t;
    float si;
    
    cout<<"Enter principal amount: ";
    cin>>p;
    cout<<"Enter rate of interest: ";
    cin>>r;
    cout<<"Enter time period: ";
    cin>>t;
    cout<<""<<endl;
    si=(p*r*t)/100;
    cout<<"Therefore, Simple Interest: "<<si<<endl;
    
    return 0;
}


OUTPUT - 
Enter principal amount: 2000
Enter rate of interest: 7
Enter time period: 3

Therefore, Simple Interest: 420
