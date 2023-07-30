//Name:Preet Sawant PRN:22070123086
//Aim:Program to check largest of three numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Enter the value of c : ";
    cin>>c;
    if(a<b)
    {
        if(c<b)
        {
            cout<<"b is the greatest number";
        }
        else
        {
            cout<<"c is the greatest number";
        }
    }
    else if(b>a)
    {
        if(c>a)
        {
            cout<<"a is the greatest number";
        }
        else
        {
            cout<<"c is the greatest number";
        }
    }
    else
    {
        cout<<"All numbers are equal";
    }
    return 0;
}
//Output
/*
Enter the value of a : 90
Enter the value of b : 99
Enter the value of c : 97
b is the greatest number
*/