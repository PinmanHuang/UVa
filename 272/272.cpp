#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    string str;
    bool isFirst = true, firstLine = true;
    while (getline(cin, str)) {
        // Check if it is the first line, if flase then print the newline for previous output.
        // if (!firstLine) {
        //     cout << '\n';
        // }
        // Find the " and check if it is the first show, if true then replacing with ``, otherwise, replacing with ''.
        for (int i = 0; i < str.length(); i++) {
            if (str[i]=='"') {
                if (isFirst) {
                    cout << "``";
                    isFirst = false;
                }  else {
                    cout << "''";
                    isFirst = true;
                }
            } else {
                cout << str[i];
            }
        }
        // firstLine = false;
        cout << '\n';
    }
    return 0;
}