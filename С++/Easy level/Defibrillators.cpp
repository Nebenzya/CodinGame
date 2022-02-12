#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

void Replacement(string& str)
{
    for (size_t i = 0; i < str.size(); i++) {
        if (str[i] == ',') str[i] = '.';
    }
}

int main()
{
    string userX;
    cin >> userX; cin.ignore();
    string userY;
    cin >> userY; cin.ignore();
    int n;
    cin >> n; cin.ignore();

    Replacement(userX);
    Replacement(userY);

    double x = stod(userX), y = stod(userY);
    const int numInfo = 6;
    const int xDefIndex = 4, yDefIndex = 5;
    string infoDefib[n][numInfo];
    double value, result = 1000000000000000;
    int answerIndex;

    for (int i = 0; i < n; i++) {
        string defib;
        getline(cin, defib);

        for (size_t j = 0; j < numInfo; j++)
        {
            auto iterator = defib.find(';');
            infoDefib[i][j].assign(defib, 0, iterator);
            defib.erase(0, iterator + 1);

            if (j == xDefIndex || j == yDefIndex)
            {
                Replacement(infoDefib[i][j]);
            }
        }
        double xDefib = stod(infoDefib[i][xDefIndex]);
        double yDefib = stod(infoDefib[i][yDefIndex]);

        value = abs(x - xDefib) + abs(y - yDefib);

        if (result > value) {
            result = value;
            answerIndex = i;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    cerr << "answerIndex = " << answerIndex << endl;

    cout << infoDefib[answerIndex][1] << endl;
}