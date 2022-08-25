#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "enter the number btw 1 to 100" << endl;
    cin >> a;
    cout << endl;
    int count = 0;
    ;
    for (int i = 0; i < a; i++)
    {
        count++;
        for (int j = 0; j <= i; j++)
        {
            cout << count<<" ";
        }

        cout << endl;
    }

    return 0;
}