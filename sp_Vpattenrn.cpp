#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the number" << endl;
       cin >> a;
    int count = 1;
       for (int i = 0; i < ((a/2)+(1)); i++)
    {

        for  (int j = 0; j < (4 + count); j++)
        {
            cout << ".";
        }

        for (int k = 0; k < ((a+2)-(2*count)); k++)
        {
              cout << " ";
        }

        for (int k = 0; k < (4 + count); k++)
        {
            cout << ".";
        }
        count++;
        cout<<endl;
    }

    return 0;
}