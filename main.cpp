#include <iostream>

using namespace std;

int main()
{
	int Sum; 
	int Sum1; 
	int i; 
	int a; 
	int N; 
	bool bol; 
	char key; 

	cout << "N=";
	cin >> N; 
	cin.get(key);  

	i = 0;
	Sum = 0;
	Sum1 = 0;
	bol = false;

	while (i < N)
	{
		i++;
		cin >> a; 
		cin.get(key); 
		if (bol) 
		{
			Sum1 += a; 
		}
		if (a == 0) { 
			bol = true;  
			Sum += Sum1; 
			Sum1 = 0; 
		}
	}
	cout << "Otvet " << endl;
	cout << "Sum = " << Sum << endl;
	cout << "Press key"; 

	cin.get(key);
	return 0;
}


