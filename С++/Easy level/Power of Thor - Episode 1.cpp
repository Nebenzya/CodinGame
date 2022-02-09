<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
    int light_x; // the X position of the light of power
    int light_y; // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();
    const int x = 40, y = 18;
    // game loop
    while (1) {
        int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remaining_turns; cin.ignore();

        if (0 <= initial_ty && initial_ty < y)
        {
            if (light_y > initial_ty)
            {
                cout << "S";
                initial_ty++;
            }
            if (light_y < initial_ty)
            {
                cout << "N";
                initial_ty--;
            }
        }
        if (0 <= initial_tx && initial_tx < x)
        {
            if (light_x > initial_tx)
            {
                cout << "E";
                initial_tx++;
            }
            if (light_x < initial_tx)
            {
                cout << "W";
                initial_tx--;
            }
        }
        cout << endl;

    }
=======
#include <iostream>
using namespace std;

int main()
{
    int light_x; // the X position of the light of power
    int light_y; // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();
    const int x = 40, y = 18;
    // game loop
    while (1) {
        int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remaining_turns; cin.ignore();

        if (0 <= initial_ty && initial_ty < y)
        {
            if (light_y > initial_ty)
            {
                cout << "S";
                initial_ty++;
            }
            if (light_y < initial_ty)
            {
                cout << "N";
                initial_ty--;
            }
        }
        if (0 <= initial_tx && initial_tx < x)
        {
            if (light_x > initial_tx)
            {
                cout << "E";
                initial_tx++;
            }
            if (light_x < initial_tx)
            {
                cout << "W";
                initial_tx--;
            }
        }
        cout << endl;

    }
>>>>>>> 65160ff5487d307ea52eff87bb0e4f2dd46cd505
}