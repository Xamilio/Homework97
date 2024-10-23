#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
   //int x;
   //int n = -10;
   //int y = 0;
   //cout << "Enter x: ";
   //cin >> x;
   //for (int i = 0; i < x; i++)
   //{
   //    for (int j = 0; j < x; j++)
   //    {
   //        cout << n << " ";
   //        n = n - 10;
   //    }
   //    cout << endl;
   //}
    
    //int x;
    //int n = 0;
    //int min;
    //int max;
    //srand(time(0));
    //cout << "Enter x: ";
    //cin >> x;
    //cout << "Enter min number: ";
    //cin >> min;
    //cout << "Enter max number: ";
    //cin >> max; 
    //if (max < min)
    //{
    //    int k = min;
    //    min = max;
    //    max = k;
    //}
    //for (int i = 0; i < x; i++)
    //{
    //    for (int j = 0; j < x; j++)
    //    {
    //            cout << rand() % (max - min) + min  << " ";
    //
    //    }
    //    cout << endl;
    //    n++;
    //}
    //Sleep(10000);
    //system("cls");

    //int x;
    //int n = 0;
    //int y = 0;
    //int z = 2;
    //int k = 2;
    //cout << "Enter x: ";
    //cin >> x;
    //for (int i = 0; i < x; i++)
    //{
    //    for (int j = 0; j < x + 1; j++)
    //    {
    //        cout << n << " ";
    //        y++;
    //        n += y;
    //    }
    //    n = 0;
    //    y = 0;
    //    k++;
    //    y++;
    //    n += z;
    //    z = z + k;
    //    
    //    cout << endl;
    //}

    int x;
    cout << "Enter x: ";
    cin >> x;
    if (x < 3 || x % 2 == 0)
    {
        cout << "Error";
        return 0;
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i == x / 2 || j == x / 2)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
}
