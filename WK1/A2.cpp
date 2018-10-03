#include <iostream>

using namespace std;

int main()
{
	double toKillMouse, toKillHuman; //Amount needed to kill a mouse and human
	double mouseWeight;
	double dieterStopWeight; //When the dieter will stop dieting
	const double SWEETNER_AMT = 0.001;

	cin >> toKillMouse;
	cin >> mouseWeight;
	cin >> dieterStopWeight;

	toKillHuman = toKillMouse * (dieterStopWeight / mouseWeight);
	cout << toKillHuman << endl;

	double sodaToKillHuman = toKillHuman / SWEETNER_AMT;


	cout << sodaToKillHuman << " cans of soda to kill the dieter" << endl;


	system("pause");

	return 0;
}