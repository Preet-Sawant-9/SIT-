//Name:Preet Sawant PRN:22070123086
//Aim:Program to make bitwise shift
#include<iostream>
using namespace std;

int main()
{
    int a = 13,i = 69,set,reset;
    int j = i<<3, k = i>>4;
    cout<<"a or b : "<<(a | 1)<<endl;
    cout<<"a and b : "<<(a & 9)<<endl;
    cout<<"Left Shift : "<<j<<endl;
    cout<<"Right Shift : "<<k;

    return 0;
}
//Output
/*
a or b : 13
a and b : 9
Left Shift : 552
Right Shift : 4
*/