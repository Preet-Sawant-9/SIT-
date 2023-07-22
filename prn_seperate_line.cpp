//Name:Preet Sawant PRN:22070123086
//Aim:To take digits of a number and print them in seperate lines
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    vector<int> v;
    int n , rem;
    cout<<"ENTER ANY NUMBER : ";
    cin>>n;
    vector<int> :: iterator it;
    int temp = n;
    while(temp > 0)
    {
        rem = temp % 10;
        v.push_back(rem);
        temp /= 10;
    }
    reverse(v.begin() , v.end());
    for(it = v.begin() ; it != v.end() ; ++it)
    {
        cout<<*it<<endl;
    }
    return 0;
}
//Output
/*
ENTER ANY NUMBER : 2323232323232
2
1
4
7
4
8
3
6
4
7
*/