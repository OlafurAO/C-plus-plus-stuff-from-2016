#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class Product
{
    public:
        string name;
        double price;
        int quantity;
};

class Database
{
    public:
        Database();

        void initialize();
        void addItem(string command);
        void deleteBasket();

        vector<Product> product;
        vector<Product> basket;

    private:
        Product p;

};

#endif // DATABASE_H
