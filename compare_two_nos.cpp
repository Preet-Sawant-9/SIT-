//Name:Preet Sawant PRN:22070123086
//Aim:To compare two numbers using Boolean Variables
#include<iostream>
using namespace std;
int main()
{
    int num1 , num2;
    bool com;
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>num1;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin>>num2;
    com = num1>num2;
    if(com == 1)
    {
        cout<<"NUMBER 1 IS GREATER";
    }
    else
    {
        cout<<"NUMBER 2 IS GREATER";
    }
    return 0;
}
//Output
/*
ENTER THE FIRST NUMBER : 90
ENTER THE SECOND NUMBER : 99
NUMBER 2 IS GREATER
*/
