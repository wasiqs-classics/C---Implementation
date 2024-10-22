// question05.cpp

#include "question05.h"
#include <iostream>
using namespace std;

// Product class implementation
Product::Product() : barcode("0000"), name("Unknown") {}

Product::Product(string code, string name) : barcode(code), name(name) {}

void Product::setCode(string code) {
    barcode = code;
}

string Product::getCode() const {
    return barcode;
}

void Product::scanner() {
    cout << "Enter barcode: ";
    cin >> barcode;
    cout << "Enter product name: ";
    cin >> name;
}

void Product::printer() const {
    cout << "Barcode: " << barcode << endl;
    cout << "Product Name: " << name << endl;
}

// PrepackedFood class implementation
PrepackedFood::PrepackedFood() : Product(), unitPrice(0.0) {}

PrepackedFood::PrepackedFood(string code, string name, double price) : Product(code, name), unitPrice(price) {}

void PrepackedFood::scanner() {
    Product::scanner();
    cout << "Enter unit price: ";
    cin >> unitPrice;
}

void PrepackedFood::printer() const {
    Product::printer();
    cout << "Unit Price: $" << unitPrice << endl;
}

void PrepackedFood::setPrice(double price) {
    unitPrice = price;
}

double PrepackedFood::getPrice() const {
    return unitPrice;
}

// FreshFood class implementation
FreshFood::FreshFood() : Product(), weight(0.0), pricePerKilo(0.0) {}

FreshFood::FreshFood(string code, string name, double weight, double pricePerKilo) 
    : Product(code, name), weight(weight), pricePerKilo(pricePerKilo) {}

void FreshFood::scanner() {
    Product::scanner();
    cout << "Enter weight (in kg): ";
    cin >> weight;
    cout << "Enter price per kilo: ";
    cin >> pricePerKilo;
}

void FreshFood::printer() const {
    Product::printer();
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Price per Kilo: $" << pricePerKilo << endl;
    cout << "Total Price: $" << calculatePrice() << endl;
}

void FreshFood::setWeight(double w) {
    weight = w;
}

void FreshFood::setPricePerKilo(double price) {
    pricePerKilo = price;
}

double FreshFood::calculatePrice() const {
    return weight * pricePerKilo;
}
