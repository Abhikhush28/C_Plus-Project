#include<iostream>
using namespace std;

int main()
{
    cout<<"\t\tC A R  P A R K I N G"<<endl;
    int enter;
    int car=0,bike=0,rikshaw=0;
    while(true)
    {
        cout<<"Press 1 for Car Parking: "<<endl;
        cout<<"Press 2 for Bike Parking: "<<endl;
        cout<<"Press 3 for Rikshaw parking: "<<endl;
        cout<<"Press 4 for Show the records: "<<endl;
        cout<<"Press 5 for Delete the record: "<<endl;
        cout<<"press 6 for Exit the Program: "<<endl;
        cout<<"Choose your options: ";
        cin>>enter;

        if(enter == 1)
        {
            car++;
            system("cls");
            cout<<car<<" Car is added successfully."<<endl<<endl;
        }
        else if(enter == 2)
        {
            bike++;
            system("cls");
            cout<<bike<<" Bike is added successfully."<<endl<<endl;
        }
        else if(enter ==3)
        {
            rikshaw++;
            system("cls");
            cout<<rikshaw<<" Rikshaw is added succesfully."<<endl<<endl;
        }
        else if(enter == 4)
        {
            system("cls");
            cout<<" C A R  ::-> "<<car<<endl;
            cout<<" B I K E ::-> "<<bike<<endl;
            cout<<" RIKSHAW ::->"<<rikshaw<<endl<<endl;
        }
        else if( enter == 5)
        {
            car = 0;
            bike = 0;
            rikshaw =0;
            system("cls");
            cout<<"All records is to be deleted..!!"<<endl;

        }
        else if(enter == 6)
        {
            exit(0);
        }
        else{
            system("cls");
            cout<<"Invaild Input...!!"<<endl;
        }
    }
    return 0;
}