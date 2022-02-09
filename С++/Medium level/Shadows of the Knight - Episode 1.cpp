#include <iostream>
using namespace std;


int main() {
    int w, w0 = 0; // width of the building.
    int h, h0 = 0; // height of the building.
    cin >> w >> h; cin.ignore();
    int n; // maximum number of turns before game over.
    cin >> n; cin.ignore();
    int x0, y0;
    cin >> x0 >> y0; cin.ignore();

    // game loop
    while (1) {
        string bomb_dir; // the direction of the bombs from batman's current
                         // location (U, UR, R, DR, D, DL, L or UL)
        cin >> bomb_dir; cin.ignore();

        for (int i = 0; i < bomb_dir.size(); i++) {
            if (bomb_dir[i] == 'U')
                h = y0;
            else if (bomb_dir[i] == 'D')
                h0 = y0;
            else if (bomb_dir[i] == 'R')
                w0 = x0;
            else if (bomb_dir[i] == 'L')
                w = x0;
        }
        x0 = (w + w0) / 2;
        y0 = (h + h0) / 2;
        cout << x0 << " " << y0 << endl;
    }
}