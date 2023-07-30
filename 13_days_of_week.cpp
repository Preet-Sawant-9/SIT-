//Name:Preet Sawant PRN:22070123086
//Aim:Program to displaty days of week
#include<iostream>
using namespace std;

int main()
{
    int day = 7;

    cout<<"Enter the day you want :";
    cin>>day;

    switch(day)
    {
        case 1:
        {
            cout<<"Monday"<<endl;
            break;
        }

        case 2:
        {
            cout<<"Tuesday"<<endl;
            break;
        }

        case 3:
        {
            cout<<"Wednesday"<<endl;
            break;
        }

        case 4:
        {
            cout<<"Thursday"<<endl;
            break;
        }

        case 5:
        {
            cout<<"Friday"<<endl;
            break;
        }

        case 6:
        {
            cout<<"Saturday"<<endl;
            break;
        }

        case 7:
        {
            cout<<"Sunday"<<endl;
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
Enter the day you want :5
Friday
*/