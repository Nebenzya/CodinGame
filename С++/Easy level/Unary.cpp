#include <iostream>
#include <string>
#include <bitset>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
	string message, str_binar = "";
	getline(cin, message);
	for (unsigned int i = 0; i < message.size(); ++i) {

		bitset <7> binary(message[i]);
		str_binar += binary.to_string();
	}

	int count = 1;
	for (int i = 0; i < str_binar.size(); i++)
	{
		if (str_binar[i] == str_binar[i + 1]) {
			count++;
			continue;
		}
		else {
			if (i != 0)cout << " ";

			if (str_binar[i] == '0') cout << "00";
			else cout << "0";

			cout << " ";
			for (int i = 0; i < count; i++) cout << "0";
			
			count = 1;
		}
	}
	// To debug: cerr << "Debug messages..." << endl;
}