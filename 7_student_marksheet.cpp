//Name:Preet Sawant PRN:22070123086
//Aim:To display grade of a student
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"HOW MANY SUBJECTS ? ";
    cin>>n;
    int A[n];
    for(int i = 0 ; i < n ; ++i)
    {
        cout<<"ENTER THE MARKS OF "<<i+1<<" SUBJECT : ";
        cin>>A[i];
    }
    int sum = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        sum += A[i];
    }
    int per = ((sum*100) / (n*100));
    if(per >= 90)
    {
        cout<<"GRADE = O";
    }
    else if(per >= 80)
    {
        cout<<"GRADE = A+";
    }
    else if(per >= 70)
    {
        cout<<"GRADE = A";
    }
    else if(per >= 60)
    {
        cout<<"GRADE = B";
    }
    else
    {
        cout<<"GRADE = F";
    }
    return 0;
}
//Output
/*
HOW MANY SUBJECTS ? 5
ENTER THE MARKS OF 1 SUBJECT : 90
ENTER THE MARKS OF 2 SUBJECT : 91
ENTER THE MARKS OF 3 SUBJECT : 93
ENTER THE MARKS OF 4 SUBJECT : 93
ENTER THE MARKS OF 5 SUBJECT : 93
GRADE = O
*/
