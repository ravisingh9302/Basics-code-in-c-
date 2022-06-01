#include <iostream>
using namespace std;

void head(void); // pre declartion of function
void body(/* here you can use void if you want */);
void leg(void);

int main()
{

    head(/* don't use void here */); // calling the function..
    body();
    leg();

    return 0;
};

// FOR HEAD CONSTRUCTION

void head(void)
{
    int count = 18;
    for (int i = 0; i < 6; i++)
    {

        if (i < 2)
        {

            for (int j = 0; j < 120; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < count; k++)
            {
                cout << "*";
            }
            count++;
            cout << endl;
        }

        // else if (i>0 && i<3)
        // {

        // }

        // if (i > 1 && i < 4)
        // {

        //     for (int j = 0; j < 120; j++)
        //     {
        //         cout << " ";
        //     }
        //     for (int k = 0; k < count; k++)
        //     {
        //         cout << "*";
        //     }
        //     cout << endl;
        // }

        if (i > 4)
        {
            count--;
            for (int j = 0; j < 118; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < count; k++)
            {
                cout << "*";
            }
            cout << endl;
        }

        else
        {
            count--;
            for (int j = 0; j < 120; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < count; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
};

// FOR BODY CONSTRUCTION

void body()
{
    int bodyr = 62;
    int bodyback = 61;
    for (int l = 0; l < 10; l++)

    {
        if (l == 0)
        {
            for (int m = 0; m < 62; m++)
            {
                cout << " ";
            }

            for (int n = 0; n < 61; n++)
            {
                cout << "*";
            }
            cout << endl;
        }

        // BODY WITH TAIL CONSTRUCTION

        if (l > 0 && l < 4)
        {
            for (int m = 0; m < 40; m++)
            {
                cout << " ";
            }

            for (int n = 0; n < 84; n++)
            {
                cout << "*";
            }

            cout << endl;
        }

        else
        {
            if (l > 7)
            {

                for (int m = 0; m < bodyback; m++)
                {
                    cout << " ";
                }
                bodyback++;

                for (int n = 0; n < bodyr; n++)
                {
                    cout << "*";
                }
                cout << endl;
                bodyr--;
                bodyr--;
            }

            else
            {
                for (int m = 0; m < 60; m++)
                {
                    cout << " ";
                }

                for (int n = 0; n < 64; n++)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
    }
};

// FOR LEG CONSTRUCTION

void leg()
{
    for (int o = 0; o < 6; o++)
    {
        if (o > 4)
        {
            for (int p = 0; p < 66; p++)
            {
                cout << " ";
            }

            for (int q = 0; q < 4; q++)
            {
                cout << "*";
            }

            for (int r = 0; r < 42; r++)
            {
                cout << " ";
            }
            for (int s = 0; s < 4; s++)
            {
                cout << "*";
            }
            cout << endl;
        }

        else
        {

            for (int p = 0; p < 65; p++)
            {
                cout << " ";
            }

            for (int q = 0; q < 6; q++)
            {
                cout << "*";
            }

            for (int r = 0; r < 40; r++)
            {
                cout << " ";
            }
            for (int s = 0; s < 6; s++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
};