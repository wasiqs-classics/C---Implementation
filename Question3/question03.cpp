// question03.cpp

#include "question03.h"
#include <iostream>
using namespace std;

// InventoryItem class implementation
InventoryItem::InventoryItem() : stockNumber(0), price(0.0) {}

InventoryItem::InventoryItem(int stockNum, double price) : stockNumber(stockNum), price(price) {}

void InventoryItem::setStockNumber(int stockNum) {
    stockNumber = stockNum;
}

void InventoryItem::setPrice(double price) {
    this->price = price;
}

double InventoryItem::getPrice() const {
    return price;
}


void InventoryItem::displayItem() const {
    cout << "Stock Number: " << stockNumber << endl;
    cout << "Price: Rs. " << price << endl;
}

// Salesperson class implementation
Salesperson::Salesperson() : idNum(0), name("") {}

Salesperson::Salesperson(int id, string name) : idNum(id), name(name) {}

void Salesperson::setIdNum(int id) {
    idNum = id;
}

void Salesperson::setName(string name) {
    this->name = name;
}

void Salesperson::displaySalesperson() const {
    cout << "Salesperson ID: " << idNum << endl;
    cout << "Salesperson Name: " << name << endl;
}

// Transaction class implementation
Transaction::Transaction() : transactionNumber(0), item(), seller() {}

Transaction::Transaction(int transactionNum, int stockNum, double price, int id, string name)
    : transactionNumber(transactionNum), item(stockNum, price), seller(id, name) {}

void Transaction::displayTransaction() const {
    cout << "Transaction Number: " << transactionNumber << endl;
    item.displayItem();
    seller.displaySalesperson();
    cout << "Cost: Rs. " << item.getPrice() << endl;
}

