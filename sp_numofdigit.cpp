#include <iostream>
#include <cmath>
using namespace std;

// MATHOD TO FIND NUMBER OF DIGIT

int sum(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int main()
{
    // FIRST METHOD

    int main()
    {
        int a, b;
        cout << "enter the number" << endl;
        cin >> a;
        cout << "the number of digit is " << sum(a) << endl;

        return 0;
    }


    // SECOND METHOD

    /*
    int a, b, c, d;
     cout << "ENTER THE NUMBER" << endl;
    cin >> a;
    b = log10(a)+1;
    cout << "THE NUMBER OF DIGIT: " << b << endl;
    */


    // THIRD METHOD
    /*
    int a;
    cout << "Enter the number" << endl;
    cin >> a;
    cout<<endl;
    string b = to_string(a);
    cout << "No. of digit :"<<b.size();
    */

    return 0;
}