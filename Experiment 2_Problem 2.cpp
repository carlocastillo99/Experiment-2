#include <iostream>
#include <conio.h>

using namespace std;

int main()

{	
	int gallons;
	float previousmonth, bill;
	const float demandcharge = 35, consumptioncharge = 1.10; 

	cout << "Enter unpaid bill for the previous month: Php ";	
	cin >> previousmonth; 
	cout << "Enter the gallons consumed: ";		
	cin >> gallons;
		
	if (previousmonth < 0 || gallons < 0 ) 
	cout << "Invalid amount! Try again." << endl;

	else if (previousmonth > 0) 
		{
			bill = demandcharge + (consumptioncharge * gallons) + previousmonth + 20;
			cout << "Your water bill is: Php " << bill << endl;
		}

	else 
		{
			bill = demandcharge + (consumptioncharge * gallons);
			cout << "Your water bill is: Php " << bill << endl;
		}

	_getch();
	return 0;
}
