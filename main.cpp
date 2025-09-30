#include <iostream>

using namespace std;

int SomePOTNumberChange(int NPOT);
int Double(int POT);

int main()
{
	int GetNumberMax = 0;
	int NPOTNumber = 0;
	int POTNumber = 0;
	int XORRememberNumber = 0;

	cin >> GetNumberMax;
	for(int i=0;i<GetNumberMax;i++)
	{
		cin >> NPOTNumber;
		POTNumber = SomePOTNumberChange(NPOTNumber);
		XORRememberNumber = XORRememberNumber ^ POTNumber;
	}
	cout << XORRememberNumber;
	return 0;
}

int SomePOTNumberChange(int NPOT) 
{
	int POT = 2;
	while(NPOT > POT)
	{
		POT = Double(POT);
	}
	return POT;
}

int Double(int POT)
{
	return POT * 2;
}