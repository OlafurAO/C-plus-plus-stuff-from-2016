#include <QCoreApplication>

#include "ServiceLayer/servicelayer.h"

ServiceLayer service;

int main()
{
    try
    {
        service.mainMenu();
        service.enterCommand();
    }

    catch(ServiceLayer)
    {
        return main();
    }

    catch(Database)
    {
        return 0;
    }


}
