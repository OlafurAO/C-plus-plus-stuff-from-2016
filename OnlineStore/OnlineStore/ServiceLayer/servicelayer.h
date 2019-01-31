#ifndef SERVICELAYER_H
#define SERVICELAYER_H

#include "Repository/database.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

class ServiceLayer
{
    public:
        ServiceLayer();

        void mainMenu();
        void enterCommand();
        void printReceipt();

        bool commandValid(string item);
        bool checkoutConfirm(string command);
        void commandCheck(string item);
        void proceedToCheckout();



    private:
        Database database;
        int basketAmount;
        double total;

        string command;

};

#endif // SERVICELAYER_H
