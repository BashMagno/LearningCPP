#include <iostream>
using namespace std;

int main()
{
	//Otra forma de crar los arrays
	/*	
		const int longIntArray = 7;
		const int longCharArray = 9;
	
		int arrayEnteros[longIntArray] = {5, 4, 3, 2, 1, 0, -1};
		char arrayCaract[longCharArray] = { 'B', 'a', 's', 'h', 'M', 'a', 'g', 'n', 'o' };

	*/
	
	int index = 0;

	int arrayEnteros[] = {5, 4, 3, 2, 1, 0, -1};
	char arrayCaract[] = {'B', 'a', 's', 'h', 'M', 'a', 'g', 'n', 'o'};
	
	for (int j : arrayEnteros)
	{
		
		cout << "Numero " << index << ": " << arrayEnteros[index] << "\n";
		index++;
	}

	cout << "\n";
	cout << "Mi nombre es: ";

	index = 0;

	for (int i : arrayCaract)
	{
		
		cout << arrayCaract[index];
		if (i == sizeof(arrayCaract) ) 
		{
			cout << "\n";
		}
		index++;
	}
	return 0;
}