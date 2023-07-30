//Name:Preet Sawant PRN:22070123086
//Aim:Take prn number and display the last five digits
#include<iostream>
using namespace std;

int main()
{
    int a,b,c = 0,reversedNumber = 0;
    cout<<"Enter the last 5 digits of your PRN :";
    cin>>a;
    while(a != 0)
    {
    b = a%10;
    a = a/10;
    c = b + c*10;
    }
    
    while (c != 0) 
    {
        int digit = c % 10;
        reversedNumber = reversedNumber * 10 + digit;
        c /= 10;
        cout <<reversedNumber%10 << endl;
    }

    return 0;
}
//Output
/*
Enter the last 5 digits of your PRN :23086
2
3
0
8
6
*/