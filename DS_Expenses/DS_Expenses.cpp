#include <iostream>
#include <string>
#include "Wallet.h"

using namespace std;

void display();

int nextWallet = 0;
Wallet* wallets=new Wallet[10];
struct Date
{
    int Day;
    int Month;
    int Year;
};


int main()
{
    cout  << "\t\t\t\t\t" <<  "Welcome To" << endl;
    cout << "\t\t\t\t" << "Monthly Expenses Manager" << endl;
    
    display();
    return 0;
}










void display()
{
    int Choice;
    cout << "Please choose what you would like to do: \n\n";

    cout << "1-Create a new Wallet\n";
    cout << "2-Add expense\n";
    cout << "3-Delete an existing Wallet\n";
    cout << "\nPlease enter your choice number: ";

    cin >> Choice;
    system("CLS");
    if (Choice == 1)
    {
        if (nextWallet == 4)
        {
            cout << "\nYou have reached yout maximum allowed wallets. You can contact us for premium subscription.\n";
            display();
        }
        string name, password;
        double income;
        cout << "Please Enter Your Wallet Name: ";  cin >> name;
        cout << "Please Enter Your Password: ";  cin >> password;
        cout << "Please Enter Your income: ";  cin >> income;
        wallets[nextWallet].Initialize_Wallet(name, income);
        nextWallet++;
        cout << "\nYou have succesfully created a new wallet.\n\n" << endl;
        display();
    }
    else if (Choice == 2)
    {
        int Walletchoice;
        cout << "Please choose the wallet you spent from " << endl;
        for (int index=0; index < nextWallet; index++)
        {
            cout << index + 1 << ". " << wallets[index].wallet_Name << endl;
        }
        cin >> Walletchoice;
        Walletchoice--;
        system("CLS");

    }
    else if (Choice == 3)
    {
        //fn3()
    }
    else
    {
        cout << "\nInvalid choice number\n\n";
        system("CLS");
        display();
    }
}