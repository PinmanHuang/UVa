#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    string keyboard="qwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbnm", encode="ertyuiop[]dfghjkl;'cvbnm,.ERTYUIOP{}DFGHJKL:\"CVBNM<>", input;
    while (getline(cin, input)) {
        for (int i=0; i<input.length(); i++) {
            /************************************************************************
            * 1. Compare origin input with encode alphabet and find out the match.  *
            * 2. Using matching index to replace the input with decode alphabet.    *
            *************************************************************************/
            for (int j = 0; j < 52; j++) {
                if (input[i] == encode[j]) {
                    input[i] = keyboard[j];
                    break;
                }
            }
        }
        cout << input << '\n';
    }
    return 0;
}