//Name:Preet Sawant PRN:22070123086
//Aim:Data Types in C++
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    int a;
    cout<<"ENTER AN INTEGER : ";
    cin>>a;
    cout<<"INTEGER = "<<a<<endl;
    cout<<sizeof(int)<<endl;

    float b;
    cout<<"ENTER A FLOAT VALUE : ";
    cin>>b;
    cout<<"FLOAT VALUE = "<<b<<endl;
    cout<<sizeof(float)<<endl;

    char c;
    cout<<"ENTER ANY CHARACTER : ";
    cin>>c;
    cout<<"CHARACTER = "<<c<<endl;
    cout<<sizeof(char)<<endl;

    double d;
    cout<<"ENTER A DOUBLE VALUE : ";
    cin>>d;
    cin.ignore();
    cout<<setprecision(10);
    cout<<"DOUBLE VALUE = "<<d<<endl;
    cout<<sizeof(double)<<endl;

    long double d1;
    cout<<"ENTER A LONG DOUBLE VALUE : ";
    cin>>d1;
    cin.ignore();
    cout<<setprecision(10);
    cout<<"LONG DOUBLE VALUE = "<<d1<<endl;
    cout<<sizeof(long double)<<endl;


    string s;
    cout<<"ENTER ANY STRING : ";
    getline(cin,s);
    cout<<"THE STRING = "<<s<<endl;
    cout<<sizeof(string)<<endl;

    bool e;
    cout<<"ENTER A BOOLEAN VALUE : ";
    cin>>boolalpha;
    cin>>e;
    cout<<boolalpha;
    cout<<"BOOLEAN VALUE = "<<e<<endl;
    cout<<sizeof(bool)<<endl;

    return 0;
}
//Output
/*
ENTER AN INTEGER : 55
INTEGER = 55
4
ENTER A FLOAT VALUE : 45.45
FLOAT VALUE = 45.45
4
ENTER ANY CHARACTER : @
CHARACTER = @
1
ENTER A DOUBLE VALUE : 2.343434
DOUBLE VALUE = 2.343434
8
ENTER A LONG DOUBLE VALUE : 4.43434343
LONG DOUBLE VALUE = 4.43434343
12
ENTER ANY STRING : hello world
THE STRING = hello world
24
ENTER A BOOLEAN VALUE : false
BOOLEAN VALUE = false
1
*/