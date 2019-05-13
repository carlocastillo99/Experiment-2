#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) 
	{
        sum += i;
    }
    cout << "Sum is equals to " << sum;
    _getch();
    return 0;
}
