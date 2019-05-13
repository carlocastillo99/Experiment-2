#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n=22, t1 = 0, t2 = 1, nextTerm = 0;


  cout << "Counting Fibonacci Numbers... " << t1 << ", " << t2 << ", ";

    for (int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            continue;
        }
        if(i == 2)
        {
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
    _getch();
    return 0;
}

