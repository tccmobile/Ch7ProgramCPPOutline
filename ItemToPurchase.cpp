//
// Created by Will Smith on 2020-03-12.
//

#include "ItemToPurchase.h"
#include <iostream>
using namespace std;

const string &ItemToPurchase::GetName() const {
    return itemName;
}

void ItemToPurchase::SetName(const string &itemName) {
    ItemToPurchase::itemName = itemName;
}

int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

void ItemToPurchase::SetPrice(int itemPrice) {
    ItemToPurchase::itemPrice = itemPrice;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemDescription = "none";
    itemPrice = 0;
    itemQuantity = 0;
}

void ItemToPurchase::SetQuantity(int itemQuantity) {
    ItemToPurchase::itemQuantity = itemQuantity;
}

const string &ItemToPurchase::GetDescription() const {
    return itemDescription;
}

void ItemToPurchase::SetDescription(const string &itemDescription) {
    ItemToPurchase::itemDescription = itemDescription;
}

ItemToPurchase::ItemToPurchase(const string &itemName, const string &itemDescription, int itemPrice, int itemQuantity)
        : itemName(itemName), itemDescription(itemDescription), itemPrice(itemPrice), itemQuantity(itemQuantity) {}

void ItemToPurchase::PrintItemCost() {
    cout<<GetName()<<" "<<GetQuantity()<<" @ $"<<GetPrice()<<
            " = $"<<GetQuantity()*GetPrice()<<endl;
}

void ItemToPurchase::PrintItemDescription() {
    cout<<GetName()<<": "<<GetDescription()<<endl;
}
