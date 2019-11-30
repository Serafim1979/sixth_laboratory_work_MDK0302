#include<iostream>
#include <cstdlib>

using namespace std;

int main()
{
	float B, x;
	int N;

	cout << "Enter float B: ";
	cin >> B;
	cout << "Enter integer N: ";
	cin >> N;
	bool used = false;

	for (int i = 0; i < N; i++)
	{
		cin >> x;
		if (B <= x && !used)
		{
			cout << B << endl;
			used = true;
		}
		cout << x << endl;
	}

	system("pause");
	return 0;
}