#include <iostream>
using namespace std;

int firstPos(int pos)
{
    cout << "Input a position between 1 and 10: " << endl;
    cin >> pos;

    return pos;
}

char moveLeftOrRight(char leftOrRight)
{
    cout << "l - for moving left" << endl;
    cout << "r - for moving right" << endl;
    cout << "Any other letter for quitting" << endl;
    cout << "Input your choice: " << endl;
    cin >> leftOrRight;

    return leftOrRight;
}
int ifRorL(int leftOrRight, int position)
{
    if(leftOrRight == 'r')
    {
        position++;
        return position;
    }
    else if(leftOrRight == 'l')
    {
        position--;
        return position;
    }
}

int main()
{
    int pos;

    char mov;

    int position = firstPos(pos);

    do
    {
        char leftOrRight = moveLeftOrRight(mov);
        int pos2 = ifRorL(leftOrRight, position);
        cout << "New position is: " << pos2;

    }while(leftOrRight == 'r' || leftOrRight == 'l');
}
