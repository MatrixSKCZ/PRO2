#include <iostream>
using namespace std;

int main()
{
    //mala nasobilka:
    for (int j = 1; j <= 10; j++)
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << i * j << ' ';
        }
        cout << endl;
    }
    cout << endl;
    //stvorec z hviezdiciek
    for (int j = 1; j <= 10; j++)
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    //pravouhly trojuholnik z hviezdiciek
    for (int j = 1; j <= 10; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    //opacny pravouhly trojuholnik z hviezdiciek
    for (int j = 10; j >= 1; j--)
    {
        for (int i = 1; i <= j; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }

}