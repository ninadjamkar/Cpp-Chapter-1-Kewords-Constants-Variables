#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%97==0)
    {
        cout<<num<<" is divisible by 97"<<endl;
    }
    else
    {
        cout<<num<<" is not divisible by 97"<<endl;
    }
    
    return 0;
}


OUTPUT -
Enter a number: 194
194 is divisible by 97
