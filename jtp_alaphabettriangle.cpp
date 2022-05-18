#include <iostream>
using namespace std;

/*
int main()
{
    int a, b, c, d,e,f;
    char ch = 'A';
    cout<<endl;
    cout << "ENTER THE NUMBER OF LINE YOU WANT IN TRIANGLE" << endl;
    cin>>e;
    cout<<endl<<endl;
    for (a = 0; a < e; a++)
    {
        for (b = (e-1); b > a; b--)
        {
            cout << " ";
        }

        for (c = 0; c <= a; c++)
        {
            cout << ch;
            ch++;
        }
        ch--;
        ch--;
        for (d = 0; d < a; d++)
        {

            cout << ch;
            ch--;
        }
        cout << endl;
        ch = 'A';
    }

    return 0;
}
*/

int main()
{
    int a, b, c, d, e, f;
    char ch;
    cout << endl;

    cout << "ENTER THE NUMBER OF LINE YOU WANT IN TRIANGLE" << endl;
    cin >> e;
    cout<<endl;

    cout << "ENTER THE CHARACTER FOR WHICH YOU WANT TRIANGLE" << endl;

    cin >> ch;
    cout << endl
         << endl;
    for (a = 0; a < e; a++)
    {
        for (b = (e - 1); b > a; b--)
        {
            cout << " ";
        }

        for (c = 0; c <= a; c++)
        {
            cout << ch;
        }

        for (d = 0; d < a; d++)
        {

            cout << ch;
        }
        cout << endl;
    }

    return 0;
}