#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {
public:
    int number;
    string sign;
    vector<int> whoIwon;
};

bool Battle(const Player& pl1, const Player& pl2) {
    if (pl1.sign == pl2.sign) {
        if (pl1.number < pl2.number)
            return true;
        else
            return false;
    }
    if (pl1.sign == "C" && pl2.sign == "P")
        return true;
    else if (pl1.sign == "P" && pl2.sign == "R")
        return true;
    else if (pl1.sign == "R" && pl2.sign == "L")
        return true;
    else if (pl1.sign == "L" && pl2.sign == "S")
        return true;
    else if (pl1.sign == "S" && pl2.sign == "C")
        return true;
    else if (pl1.sign == "C" && pl2.sign == "L")
        return true;
    else if (pl1.sign == "L" && pl2.sign == "P")
        return true;
    else if (pl1.sign == "P" && pl2.sign == "S")
        return true;
    else if (pl1.sign == "S" && pl2.sign == "R")
        return true;
    else if (pl1.sign == "R" && pl2.sign == "C")
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n; cin.ignore();
    Player allPl[n];

    for (int i = 0; i < n; i++) {
        cin >> allPl[i].number >> allPl[i].sign;
        cin.ignore();
    }

    while (n > 1) {
        int count = 0;
        for (int i = 0; i < n; i += 2) {
            if (Battle(allPl[i], allPl[i + 1])) {
                allPl[i].whoIwon.push_back(allPl[i + 1].number);
                allPl[i - count] = allPl[i];
            }
            else {
                allPl[i + 1].whoIwon.push_back(allPl[i].number);
                allPl[i - count] = allPl[i + 1];
            }
            count++;
        }
        n /= 2;
    }

    // answer
    cout << allPl[0].number << endl;
    for (int i = 0; i < allPl[0].whoIwon.size(); i++) {
        cout << allPl[0].whoIwon[i];
        if (i != allPl[0].whoIwon.size() - 1)
            cout << " ";
    }
    cout << endl;
}