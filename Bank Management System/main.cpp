#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;


class bank
{
    char name[100],add[100],y;
    int balance;
    public:
        void open_Account();
        void credit_Money();
        void withdraw_Money();
        void check_Balance();
};

// opening bank account details function.

void bank :: open_Account()
{
    cout<<"Enter your full name :: ";
    cin.ignore();
    cin.getline(name,100);

    cout<<"Enter your Address :: ";
    cin.ignore();
    cin.getline(add,100);

    cout<<"What type of account you open saving (s) or Current (c) ";
    cin>>y;

    cout<<"Enter Amount for Deposite :: ";
    cin>>balance;

    cout<<"Your account has been created successfully.\n";

}

// now we have to derived the function of deposite_money();
void bank :: credit_Money()
{
    int a;
    cout<< "Enter how much you deposite :: ";
    cin>>a;
    cout<<"Right now you have deposite ::\t"<<a;

    balance += a;
    cout<<"\nTotal Amount is availabe in your account ::\t"<<balance;
}
//function for check balance
void bank :: check_Balance()
{
    cout<<"Your Full Name :: \t"<<name;
    cout<<"\nYour address :: \t"<<add;
    cout<<"\nType of Account that you open :: \t"<<y;
    cout<<"\nAmount that you have been deposite :: \t"<<balance;
}
// function for withdraw  money
void bank :: withdraw_Money()
{
    float amount;
    cout<<"\n Withdraw Section \n";
    cout<<"\n Enter amount  to withdraw :: ";
    cin>>amount;

    balance -= amount;

    cout<<"Total Amount is left :: "<<balance;

}



int main()
{
    int ch;
    char x;
    bank obj;
    do
    {
    
    cout<<"1) Open Account. \n";
    cout<<"2) Credit Money. \n";
    cout<<"3) Withdraw Money. \n";
    cout<<"4) Balance check. \n";
    cout<<"5) Exit \n";
    cout<<"Select the option: ";
    cin>>ch;

    switch(ch)
    {
        case 1:
            cout<<"Open Account \n";
            obj.open_Account();
            break;
        case 2:
            cout<<"Credit Amount \n";
            obj.credit_Money();
            break;
        case 3:
            cout<<"Withdraw Money \n";
            obj.withdraw_Money();
            break;
        case 4:
            cout<<"Balanace check \n";
            obj.check_Balance();
            break;
        case 5:
            if(ch == 5)
            {
                exit(1);
            }
        default:
            cout<<"Your Entered Option doesn't exist. Try Again !!. \n";
            }

        cout<<"\nDo you want to select next option then press yes(y) or No (y)\n";
        x=getch();

        if(x=='N'||x=='n')
        {
            exit(1);
        }
    }
    while (x=='Y'|| x=='y');
    

    return 0;
}
