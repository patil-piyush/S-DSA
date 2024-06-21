#include <iostream>
using namespace std;

int main()
{
    int a=10,*p,*q,i,n;
    //printing the value of variable using pointer
    p=&a;
    cout<<"The value of a: "<<*p;

    //dynamic memory allocation
    cout<<"\nEnter the size: ";
    cin>>n;
    q=new int[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter "<<i<< " element: ";
        cin>>*(q+i);
    }
    cout<<"The array elements are: ";
    for(i=0;i<n;i++)
        cout<<*(q+i)<<" ";
        
    //the size of pionters which are pointing to various types of data types e.g.- int, float, char, double, string .etc
    int b=20,*r=&b;
    float c=12.33,*s=&c;
    double d=44.56,*t=&d;
    string e="xyz",*u=&e;

    cout<<"\nSize of int data-type: "<<(sizeof(r));
    cout<<"\nSize of float data-type: "<<(sizeof(s));
    cout<<"\nSize of double data-type: "<<(sizeof(t));
    cout<<"\nSize of string data-type: "<<(sizeof(u));
    
    return 0;
}
