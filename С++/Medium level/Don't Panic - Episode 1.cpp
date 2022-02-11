#include <iostream>
#include <string>

using namespace std;
int main()
{
    int nb_floors; // number of floors
    int width; // width of the area
    int nb_rounds; // maximum number of rounds
    int exit_floor; // floor on which the exit is found
    int exit_pos; // position of the exit on its floor
    int nb_total_clones; // number of generated clones
    int nb_additional_elevators; // ignore (always zero)
    int nb_elevators; // number of elevators
    int elev_pos[nb_elevators];
    cin >> nb_floors >> width >> nb_rounds >> exit_floor >> exit_pos >> nb_total_clones >> nb_additional_elevators >> nb_elevators; cin.ignore();
    for (int i = 0; i < nb_elevators; i++) {
        int elevator_floor; // floor on which this elevator is found
        int elevator_pos; // position of the elevator on its floor
        cin >> elevator_floor >> elev_pos[elevator_floor]; cin.ignore();
    }

    // game loop
    while (1) {
        int clone_floor;  // floor of the leading clone
        int clone_pos;    // position of the leading clone on its floor
        string direction; // direction of the leading clone: LEFT or RIGHT
        cin >> clone_floor >> clone_pos >> direction; cin.ignore();

        if (clone_floor != nb_elevators) {
            if (clone_pos < elev_pos[clone_floor] && direction != "RIGHT")
                cout << "BLOCK" << endl;
            else if (clone_pos > elev_pos[clone_floor] && direction != "LEFT")
                cout << "BLOCK" << endl;
            else
                cout << "WAIT" << endl;
        }
        else {
            if (clone_pos < exit_pos && direction != "RIGHT")
                cout << "BLOCK" << endl;
            else if (clone_pos > exit_pos && direction != "LEFT")
                cout << "BLOCK" << endl;
            else
                cout << "WAIT" << endl;
        }
    }
}