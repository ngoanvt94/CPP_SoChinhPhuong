
#include <iostream>
using namespace std;

int main()
{
	int so;
	cin >> so;
	for (int i = 1; i <= so; i++)
	{
		if (checkSNT(i)) cout << i << " ";

	}
}
bool checkSNT(int so) {
	if ((int)sqrt(so) == sqrt(so)) return true;
	return false;
}

