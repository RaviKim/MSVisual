//SWExpert_2058
// Made by RaviKim in 2018.04.12

#include <iostream>
using namespace std;

int main(void)
{

	int cnt = 0;
	int addResult = 0; // µ¡¼À °á°ú
	int middle = 0;
	int a1, a2, a3, a4 = 0;


	cin >> cnt; // Input ÀÚ¿¬¼ö N

	for (int i = 0; i < 1; i++)
	{
		if (cnt >= 1000) {
			middle = cnt / 1000;
			a1 = middle;
			cnt = cnt - (a1 * 1000);
			addResult += a1;
		}
		if (cnt >= 100) {
			middle = cnt / 100;
			a2 = middle;
			cnt = cnt - (a2 * 100);
			addResult += a2;
		}
		if (cnt >= 10) {
			middle = cnt / 10;
			a3 = middle;
			cnt = cnt - (a3 * 10);
			addResult += a3;
		}
		if (cnt > 0) {
			middle = cnt % 10;
			a4 = middle;
			cnt = cnt - (a4 * 10);
			addResult += a4;
		}
	}
	cout << addResult << endl;


}