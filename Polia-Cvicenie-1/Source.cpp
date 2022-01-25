#include <iostream>
using namespace std;

int main()
{

	string x[] = { "hruska","jablko","zemiak","mrkva","ananas" };

	int a = sizeof(x) / sizeof x[0];
	a = a - 1;

	for (int i = a; i >= 0;)
	{
		cout << x[i] << endl;
		i--;
	}
}