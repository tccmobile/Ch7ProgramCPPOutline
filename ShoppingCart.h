//
// Created by Will Smith on 2020-03-12.
//

#ifndef CH7PROGRAM_SHOPPINGCART_H
#define CH7PROGRAM_SHOPPINGCART_H

#include <string>
#include <vector>
#include "ItemToPurchase.h"

using namespace std;

class ShoppingCart {
private:
    string customerName;
    string currentDate;
    vector<ItemToPurchase> cartItems;
public:
    ShoppingCart();

    ShoppingCart(const string &customerName, const string &currentDate);

    const string &GetCustomerName() const;

    const string &GetDate() const;

    void AddItem(ItemToPurchase item);

    void RemoveItem(string name);

    void ModifyItem(ItemToPurchase item);

    int GetNumItemsInCart();

    int GetCostOfCart();

    void PrintTotal();

    void PrintDescriptions();

};


#endif //CH7PROGRAM_SHOPPINGCART_H
