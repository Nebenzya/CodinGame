#include <iostream>
#include <string>
using namespace std;

int main()
{
    int l;
    cin >> l; cin.ignore();
    int h;
    cin >> h; cin.ignore();

    string text, conv_text;
    getline(cin, text);
    conv_text.resize(text.size());

    for (int i = 0; i < text.size(); i++)
    {
        conv_text[i] = (char)toupper(text[i]);
        if (!(conv_text[i] >= 'A' && conv_text[i] <= 'Z'))
            conv_text[i] = '[';
    }

    string row[h];
    for (int i = 0; i < h; i++) {
        getline(cin, row[i]);
    }

    for (int i = 0; i < h; i++) {

        for (int k = 0; k < conv_text.size(); k++) {

            int index = (conv_text[k] - 'A') * l;

            for (int j = index; j < l + index; j++) {
                cout << row[i][j];
            }
        }
        cout << endl;
    }
}