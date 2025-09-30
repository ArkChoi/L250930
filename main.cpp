#include <iostream>

using namespace std;

long long SomePOTNumberChange(long long NPOT);
long long Double(long long POT);

int main()
{
	long long GetNumberMax = 0;
	long long NPOTNumber = 0;
	long long POTNumber = 0;
	long long XORRememberNumber = 0;

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

long long SomePOTNumberChange(long long NPOT)
{
	long long POT = 2;
	while(POT <= NPOT)
	{
		POT = Double(POT);
	}
	return POT;
}

long long Double(long long POT)
{
	return POT * 2;
}