#include <iostream>
#include "ShoppingCart.h"

using namespace std;

char PrintMenu(ShoppingCart cart){
    char userChoice = '?';

    cout<<"\nMENU"<<endl;
    cout<<"a - Add item to cart"<<endl;
    cout<<"d - Remove item from cart"<<endl;
    cout<<"c - Change item quantity"<<endl;
    cout<<"i - Output items' descriptions"<<endl;
    cout<<"o - Output shopping cart"<<endl;
    cout<<"q - Quit"<<endl;
    cout<<"\nChoose an option:"<<endl;
    cin>>userChoice;

    return userChoice;
}

int main() {
    string name, date;
    char choice;

    cout<<"Enter customer's name:"<<endl;
    getline(cin, name);
    cout<<"Enter today's date:"<<endl;
    getline(cin,date);

    ShoppingCart myCart(name,date);

    cout<<"\nCustomer name: "<<myCart.GetCustomerName()<<endl;
    cout<<"Today's date: "<<myCart.GetDate()<<endl;

    do{
       choice = PrintMenu(myCart);
    } while (choice!='q');


    return 0;
}