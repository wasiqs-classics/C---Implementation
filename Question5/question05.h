// question05.h

#ifndef QUESTION05_H
#define QUESTION05_H

#include <string>
using namespace std;

// Base class Product
class Product {
protected:
    string barcode;
    string name;

public:
    Product();
    Product(string code, string name);
    virtual void scanner();
    virtual void printer() const;

    void setCode(string code);
    string getCode() const;
};

// Derived class PrepackedFood
class PrepackedFood : public Product {
private:
    double unitPrice;

public:
    PrepackedFood();
    PrepackedFood(string code, string name, double price);
    void scanner() override;
    void printer() const override;
    void setPrice(double price);
    double getPrice() const;
};

// Derived class FreshFood
class FreshFood : public Product {
private:
    double weight;
    double pricePerKilo;

public:
    FreshFood();
    FreshFood(string code, string name, double weight, double pricePerKilo);
    void scanner() override;
    void printer() const override;
    void setWeight(double weight);
    void setPricePerKilo(double price);
    double calculatePrice() const;
};

#endif
