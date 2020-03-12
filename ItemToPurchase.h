//
// Created by Will Smith on 2020-03-12.
//

#ifndef CH7PROGRAM_ITEMTOPURCHASE_H
#define CH7PROGRAM_ITEMTOPURCHASE_H

#include <string>
using namespace std;


class ItemToPurchase {
private:
    string itemName;
    string itemDescription;
    int itemPrice;
    int itemQuantity;
public:

    ItemToPurchase(const string &itemName, const string &itemDescription, int itemPrice, int itemQuantity);

    ItemToPurchase();

    const string &GetName() const;

    void SetName(const string &itemName);

    int GetPrice() const;

    const string &GetDescription() const;

    void SetDescription(const string &itemDescription);

    void SetPrice(int itemPrice);

    int GetQuantity() const;

    void SetQuantity(int itemQuantity);

    void PrintItemCost();

    void PrintItemDescription();
};


#endif //CH7PROGRAM_ITEMTOPURCHASE_H
