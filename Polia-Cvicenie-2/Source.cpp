#include <iostream>
using namespace std;

int main()
{

	int x[] = {80,20,124,50,13,68,83,5,153,44,240,856,720,8,24,34,349,442,3,256,54,12};

	int a = sizeof(x) / sizeof x[0];
	a = a - 1;
	float b = sizeof(x) / sizeof x[0];
	float sucet = 0;
			
	
			for (int i = a; i >= 0;)
				{
					 int cislo = x[i];
					 int c = sucet;
					 sucet = c + cislo;
					i--;
	
				}
		float priemer;
		priemer = sucet / b;
		cout << "priemer tvojich cisel je " << priemer << endl;
	

		int max = x[1];
		
		for (int i = a; i >= 0;)
			{
			if (x[i] > max) {
				max = x[i];
			}
			else {}

			i--;

			}
		cout << "najvacsie z tvojich cisel je " << max << endl;


		int min = x[1];

		for (int i = a; i >= 0;)
		{
			if (x[i] < min) {
				min = x[i];
			}
			else {}

			i--;

		}
		cout << "najmensie z tvojich cisel je " << min << endl;


}