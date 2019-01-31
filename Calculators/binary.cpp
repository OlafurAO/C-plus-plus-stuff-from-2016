#include <iostream>
#include <stdlib.h>

using namespace std;

int bitSelect();
int valueCheck(const int ARRAY_SIZE);
void binaryInput(int bits);
void calculateInfo(int binaryString[], const int ARRAY_SIZE);
void displayBinary(int binaryString[], int backup[], const int ARRAY_SIZE);
void mainMenu();

int main()
{
    mainMenu();
    int bits = bitSelect();
    binaryInput(bits);
}

int bitSelect()
{
    int bits;

    cout << "How many bits do you want to input? " << endl;
    cout << "4 bits" << endl;
    cout << "8 bits" << endl;
    cin >> bits;

    return bits;

}

int valueCheck(const int ARRAY_SIZE)
{
    int value;

    if(ARRAY_SIZE == 4)
    {
        value = 8;
        return value;
    }

    else if(ARRAY_SIZE == 8)
    {
        value = 128;
        return value;
    }
}

void binaryInput(int bits)
{
    system("cls");
    mainMenu();

    const int ARRAY_SIZE = bits;

    int binaryString[ARRAY_SIZE];

    cout << "Input binary string: " << endl;

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        cin >> binaryString[i];
    }

    calculateInfo(binaryString, ARRAY_SIZE);


}

void calculateInfo(int binaryString[], const int ARRAY_SIZE)
{
    int value = valueCheck(ARRAY_SIZE);

    int backup[ARRAY_SIZE];

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        backup[i] = binaryString[i];

        if(binaryString[i] == 1)
        {
            binaryString[i] = value;
        }

        else
        {
            binaryString[i] = 0;
        }

        value = value/2;
    }

    displayBinary(binaryString, backup, ARRAY_SIZE);
}

void displayBinary(int binaryInput[], int backup[], const int ARRAY_SIZE)
{
    int total = 0;

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        total = total + binaryInput[i];
    }

    system("cls");
    mainMenu();

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        if(i == 4)
        {
            cout << " ";
        }
        cout << backup[i];
    }

    cout << " Equals " << total << endl;
}

void mainMenu()
{
    cout << "The binary calculator" << endl;

    for(int i = 0; i <= 20; i++)
    {
        cout << "=";
    }

    cout << endl;
}
