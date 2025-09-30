#include <iostream>

using namespace std;

int Source()
{
	unsigned char A = 1;
	unsigned char B = 0;

	cout << (A & B) << endl;
	cout << (A | B) << endl;
	cout << (~A) << endl;
	cout << (A ^ B) << endl;

	return 0;
}