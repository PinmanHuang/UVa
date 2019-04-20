#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    string str[100];    // Use string array to save all the inputs.
    int line=0, max=0;
    while (getline(cin, str[line])) {
        line++;         // Record the input line.
    }
    // Find the maximum length of these strings.
    for (int l = line-1; l >= 0; l--) {
        if (str[l].length() > max) {
            max = str[l].length();
        }
    }
    // Print the output.
    for (int c = 0; c < max; c++) {
        for (int l = line-1; l >= 0; l--) {
            
            if (str[l].length() <= c) { // When lth string size is smaller than c or lth string is space or null.
                cout << ' ';
            } else {
                cout << str[l][c];
            }
            
        }
        cout << '\n';
    }
    return 0;
}