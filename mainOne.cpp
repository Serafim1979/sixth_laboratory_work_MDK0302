/*Given an integer Kand a set of nonzero integers; 
the sign of its completion is the number 0. 
Print the number of the last number in the set greater than K. 
if there are no such numbers, print 0.*/

#include<iostream>

using namespace std;

int main()
{
	int tmp = 1, rez = 0, K;

	cout << "Enter K: ";
	cin >> K;

	while (tmp != 0)
	{
		cin >> tmp;
		if (tmp > K)
			rez = tmp;
	}

	cout << endl;
	cout << rez;

	system("pause");
	return 0;
}