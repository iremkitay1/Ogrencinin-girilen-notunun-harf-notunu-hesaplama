#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int puan;
	cout << "��renci puan�n� giriniz : ";
	cin >> puan;

	if (puan > 100)
	{
		cout << "L�tfen, ge�erli bir puan giriniz. " << endl;
	}
	else if (puan >= 90)
	{
		cout << "AA" << endl;
	}
	else if (puan >= 80)
	{
		cout << "BB" << endl;
	}
	else if (puan >= 70)
	{
		cout << "CC" << endl;
	}
	else if (puan >= 60)
	{
		cout << "DD" << endl;
	}
	else if (puan < 60)
	{
		cout << "Kald�n�z, harf notunuz FF" << endl;
	}

	return 0;
}