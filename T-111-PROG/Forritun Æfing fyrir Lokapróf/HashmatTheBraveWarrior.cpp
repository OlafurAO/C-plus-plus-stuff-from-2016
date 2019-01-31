#include <iostream>
using namespace std;

int main()
{
    int hashmatTroops;
    int enemyTroops;
    int instances;
    int difference;

    cout << "Input number of instances: " << endl;
    cin >> instances;

    for(int i = 0; i < instances; i++)
    {
        cout << "Input number of Hasmat's troops: " << endl;
        cin >> hashmatTroops;
        cout << "Input number of the enemy's troops: " << endl;
        cin >> enemyTroops;

        difference = enemyTroops - hashmatTroops;

        cout << "The difference between Hasmat and enemy troops is " << difference << endl;
    }


}
