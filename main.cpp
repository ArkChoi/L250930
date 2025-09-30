#include <iostream>

using namespace std;

int NumberInput();

int main()
{
	int GetNumberMax = 0;
	int NPOTNumber = 0;
	int XORRememberNumber = 0;

	cin >> GetNumberMax;
	for(int i=0;i<GetNumberMax;i++)
	{
		cin >> NPOTNumber;
		XORRememberNumber = XORRememberNumber ^ NPOTNumber;
	}
	cout << XORRememberNumber;
	return 0;
}