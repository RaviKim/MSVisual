/*
Restart skill-up Training.
One day, One programing.

>>SW/Expert 2058

Author : RaviKim
In 2018.04.12

�ϳ��� �ڿ����� �Է� �޾� �� �ڸ����� ���� ����ϴ� ���α׷��� �ۼ��϶�.

*/
#if 0
#include <iostream>
using namespace std;

int main(void)
{

	int cnt = 0;
	int addResult = 0; // ���� ���
	int conti = 0;	// �߰� ����� �Ķ����
	int loop = 5;	// ����� �ڵ带 ����/

	cin >> cnt; // Input �ڿ��� N
	
	int *Array = new int[5];	// �ڿ��� �ִ� 4�ڸ���.
	while (loop--) { Array[loop] = 0; }	// ���� ��� 0���� �ʱ�ȭ.

	for (int i = 0; i < 1; i++)
	{
		conti = cnt / 1000;
		Array[i] = conti;
		Array[i + 1] = cnt / 100;
		Array[i + 2] = cnt / 10;
		Array[i + 3] = cnt % 10;



		cout << "wait";
	}

}
#endif


#if 1
#include <iostream>
using namespace std;

int main(void)
{

	int cnt = 0;
	int addResult = 0; // ���� ���
	int middle = 0;
	int a1 ,a2,a3,a4= 0;


	cin >> cnt; // Input �ڿ��� N

	for (int i = 0; i < 1; i++)
	{
		if(cnt >= 1000){
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
#endif