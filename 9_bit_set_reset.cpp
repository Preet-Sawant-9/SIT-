//Name:Preet Sawant PRN:22070123086
//Aim:Program to set or reset bits
#include<iostream>
using namespace std;

int main()
{
    int A = 50, bset, breset, A1, A2;
    cout<<"Enter the bit to be set : ";
    cin>>bset;
    cout<<endl<<"Enter the bit to be reset :";
    cin>>breset;

    A1 = A | (1<<bset);
    A2 = A & (~1>>breset);

    cout<<endl<<"Set bit : "<<A1;
    cout<<endl<<"Reset bit :"<<A2;

    return 0 ;

}
//Output
/*
Enter the bit to be set : 4

Enter the bit to be reset :5

Set bit : 50
Reset bit :50
*/