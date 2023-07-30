//Name:Preet Sawant PRN:22070123086
//Aim:Program to make calculator using switch
#include<iostream>
using namespace std;

int main()
{
    float a,b;
    int c = 4;

    cout<<"Enter the first Number :";
    cin>>a;

    cout<<"Enter the second Number :";
    cin>>b;

    cout<<"Enter the operation to execute :"<<endl;
    cout<<"1.Sum"<<endl;
    cout<<"2.Substraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cin>>c;

    switch(c)
    {
        case 1:
        {
            cout<<"The sum is :"<<a+b<<endl;
            break;
        }

        case 2:
        {
            cout<<"The difference is :"<<a-b<<endl;
            break;
        }

        case 3:
        {
            cout<<"The product is :"<<a*b<<endl;
            break;
        }

        case 4:
        {
            cout<<"The quotient is :"<<a/b<<endl;
            break;
        }

        default:
        {
            cout<<"Wrong Input";
            break;
        }
    }

    return 0;
}
//Output
/*
Enter the first Number :99
Enter the second Number :90
Enter the operation to execute :
1.Sum
2.Substraction
3.Multiplication
4.Division
2
The difference is :9
*/