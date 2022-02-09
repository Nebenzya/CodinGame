<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{

    while (1) {

        int value, length = 0;
        for (int i = 0; i < 8; i++) {
            int mountain_h; // represents the height of one mountain.
            cin >> mountain_h; cin.ignore();
            if (mountain_h > length) {
                value = i;
                length = mountain_h;
            }
        }
        cout << value << endl; // The index of the mountain to fire on.
    }
=======
#include <iostream>
using namespace std;

int main()
{

    while (1) {

        int value, length = 0;
        for (int i = 0; i < 8; i++) {
            int mountain_h; // represents the height of one mountain.
            cin >> mountain_h; cin.ignore();
            if (mountain_h > length) {
                value = i;
                length = mountain_h;
            }
        }
        cout << value << endl; // The index of the mountain to fire on.
    }
>>>>>>> 65160ff5487d307ea52eff87bb0e4f2dd46cd505
}