#include<iostream>
using namespace std;

int main(){

    int u_input;
    int amount=0, count=0;
    int r=0;
    int c=0;
    int b=0;
    
    while (true){

    cout<<"\nPress 1 for Rickshaw"<<endl;
    cout<<"Press 2 for Car"<<endl;
    cout<<"Press 3 for Bus"<<endl;
    cout<<"Press 4 for Show the Record"<<endl;
    cout<<"Press 5 for Delete the Record"<<endl;
    cout<<"\nEnter no.: ";
    cin>>u_input;

    if (u_input == 1)
    {
        if (count <= 50){
        r=r+1;
        amount = amount + 100;
        count = count + 1;
        }
        else
        cout<<"No more vehicles, Parking is full"<<endl;

    }

    else if (u_input == 2)
    {
        if (count <= 50){
        c=c+1;
        amount = amount + 200;
        count = count + 1;
        }
        else
        cout<<"No more vehicles, Parking is full"<<endl;;
    }

    else if (u_input == 3)
    {
        if (count <= 50){
        b=b+1;
        amount = amount + 300;
        count = count + 1;
        }
        else
        cout<<"No more vehicles, Parking is full"<<endl;
    }

    else if (u_input == 4)
    {
        cout<<"\nThe total amount = "<<amount<<endl;
        cout<<"The total no. of vehicles parked = "<<count<<endl;
        cout<<"The total no. of rickshaw parked = "<<r<<endl;
        cout<<"The total no. of car parked = "<<c<<endl;
        cout<<"The total no. of bus parked = "<<b<<endl;
    }

    else if (u_input == 5)
    {
        amount = 0;
        count = 0;
        r=0;
        c=0;
        b=0;
        cout<<"\n------Record Deleted------\n";
    }

    else {
        cout<<"Inavalid Number!!!"<<endl;
    }

    }
    



    return 0;
}
