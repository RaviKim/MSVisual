/*
Restart skill-up Training.
One day, One programing.

>>SW/Expert 2058

Author : RaviKim
In 2018.04.12

하나의 자연수를 입력 받아 각 자릿수의 합을 계산하는 프로그램을 작성하라.

*/
#if 0
#include <iostream>
using namespace std;

int main(void)
{

	int cnt = 0;
	int addResult = 0; // 덧셈 결과
	int conti = 0;	// 중간 저장용 파라미터
	int loop = 5;	// 깔끔한 코드를 위해/

	cin >> cnt; // Input 자연수 N
	
	int *Array = new int[5];	// 자연수 최대 4자리라서.
	while (loop--) { Array[loop] = 0; }	// 저장 장소 0으로 초기화.

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
	int addResult = 0; // 덧셈 결과
	int middle = 0;
	int a1 ,a2,a3,a4= 0;


	cin >> cnt; // Input 자연수 N

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