#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int y; 
    char z;
    
    cout<<"Enter Package (Indicate if A, B, or C): "; cin >> z; 
    cout<<"Enter number of hours: "; cin >> y; 
    
switch (z)
    
    {
        case 'A':
        case 'a':
            if (y > 10)
            cout << "Your TOTAL monthly bill is: $" << 995*(y-10)*20;
            else if (y <= 10)
           cout << "Your TOTAL monthly bill is: $" << 995;
            else 
             cout << "Error!";
        break; 
        
        case 'B':
        case 'b':
        if (y > 20)
            cout << "Your TOTAL monthly bill is: $" << 1495*(y-20)*10;
            else if (y <= 20)
           cout << "Your TOTAL monthly bill is: $" << 1495;
            else 
             cout << "Error!";
        break; 
        
        case 'C':
        case 'c':
        cout << "Your TOTAL monthly bill is: $1995";
        break; 
        
        default:
        cout << "Error!";
    }
    
	_getch(); 
    return 0;
}
