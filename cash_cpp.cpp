#include <iostream>

using namespace std;

int main() 
{
    int n, left_over;
    cout << "Price: ";
    cin >> n;

    if (n < 25)
        cout << "Low Price";

    else
    {
        left_over = n / 1000;
        n %= 1000;
        if(left_over > 0)
            cout << "$1000 bills: " << left_over << "\n";

        left_over = n / 500;
        n %= 500;
        if (left_over > 0)
            cout << "$500 bills: " << left_over << "\n";

        left_over = n / 200;
        n %= 200;
        if (left_over > 0)
            cout << "$200 bills: " << left_over << "\n";

        left_over = n / 100;
        n %= 100;
        if (left_over > 0)
            cout << "$100 bills: " << left_over << "\n";

        left_over = n / 50;
        n %= 50;
        if (left_over > 0)
            cout << "$50 bills: " << left_over << "\n";

        left_over = n / 25;
        if (left_over > 0)
            cout << "$25 bills: " << left_over << "\n";

        if (n < 25)
            cout << "You Have " << n << " Cash.";
    }

    return 0;
}