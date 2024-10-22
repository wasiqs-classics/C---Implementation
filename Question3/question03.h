// question03.h

#ifndef QUESTION03_H
#define QUESTION03_H

#include <string>
using namespace std;

// InventoryItem class
class InventoryItem {
private:
    int stockNumber;
    double price;

public:
    InventoryItem();
    InventoryItem(int stockNum, double price);
    void setStockNumber(int stockNum);
    void setPrice(double price);
    void displayItem() const;
    double getPrice() const;
};

// Salesperson class
class Salesperson {
private:
    int idNum;
    string name;

public:
    Salesperson();
    Salesperson(int id, string name);
    void setIdNum(int id);
    void setName(string name);
    void displaySalesperson() const;
};

// Transaction class
class Transaction {
private:
    int transactionNumber;
    InventoryItem item;
    Salesperson seller;

public:
    Transaction();
    Transaction(int transactionNum, int stockNum, double price, int id, string name);
    void displayTransaction() const;
};

#endif
