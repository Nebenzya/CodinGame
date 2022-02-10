#include <iostream>
using namespace std;

int main()
{
	int number, value, answer = 0, buffer = 0, max = 0;
	cin >> number; cin.ignore();

	for (int i = 0; i < number; i++) {
		cin >> value; cin.ignore();

		if (max < value) max = value;
		else buffer = value - max;
		answer = answer > buffer ? buffer : answer;
	}
	cout << answer << endl;
}