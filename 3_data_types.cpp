//Name:Preet Sawant PRN:22070123086
//Aim:Data Types in C++
#include <iostream>
using namespace std;
int main()
{
    int MyintVar = 10;
    float MyfloatVar = 10.5;
    double a = 10.56;
    const char* str_const = "I AM VENGEANCE" ;
    string c = "I HAVE BECOME DEATH";
    bool MyBoolVar = 1;
    
    cout<<"Integer value :"<<MyintVar<<endl;
    cout<<"Size of My Int Var :"<<sizeof(MyintVar)<<"bytes"<<endl;
    cout<<"Float Value is :"<<MyfloatVar<<endl;
    cout<<"Size of My My float Var :"<<sizeof(MyfloatVar)<<"bytes"<<endl;
    cout<<"Double value is :"<<a<<endl;
    cout<<"Size of My Double Var is :"<<sizeof(a)<<"bytes"<<endl;
    cout<<"Char is :"<<str_const<<endl;
    cout<<"Size of My const Character is :"<<sizeof(str_const)<<"bytes"<<endl;
    cout<<"String is :"<<c<<endl;
    cout<<"Size of String is :"<<sizeof(c)<<"bytes"<<endl;
    cout<<"Bool value is :"<<MyBoolVar<<endl;
    cout<<"Size of My bool Var is :"<<sizeof(MyBoolVar)<<"byte"<<endl;
    
    return 0;
}
//Output
/*
Integer value :10
Size of My Int Var :4bytes
Float Value is :10.5
Size of My My float Var :4bytes
Double value is :10.56
Size of My Double Var is :8bytes
Char is :I AM VENGEANCE
Size of My const Character is :4bytes
String is :I HAVE BECOME DEATH
Size of String is :24bytes
Bool value is :1
Size of My bool Var is :1byte
*/