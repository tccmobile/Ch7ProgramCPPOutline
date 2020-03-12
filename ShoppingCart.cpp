//
// Created by Will Smith on 2020-03-12.
//

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() {
    customerName = "none";
    currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(const string &customerName, const string &currentDate) : customerName(customerName),
                                                                                    currentDate(currentDate) {}

const string &ShoppingCart::GetCustomerName() const {
    return customerName;
}

const string &ShoppingCart::GetDate() const {
    return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item) {

}

void ShoppingCart::RemoveItem(string name) {

}

void ShoppingCart::ModifyItem(ItemToPurchase item) {

}

int ShoppingCart::GetNumItemsInCart() {
    return 0;
}

int ShoppingCart::GetCostOfCart() {
    return 0;
}

void ShoppingCart::PrintTotal() {

}

void ShoppingCart::PrintDescriptions() {

}
