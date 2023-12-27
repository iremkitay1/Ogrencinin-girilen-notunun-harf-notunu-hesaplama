#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int puan;
	cout << "Öðrenci puanýný giriniz : ";
	cin >> puan;

	if (puan > 100)
	{
		cout << "Lütfen, geçerli bir puan giriniz. " << endl;
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
		cout << "Kaldýnýz, harf notunuz FF" << endl;
	}

	return 0;
}