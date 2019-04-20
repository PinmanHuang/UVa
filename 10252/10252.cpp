#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    string str1, str2, alphabet="abcdefghijklmnopqrstuvwxyz";
    while (getline(cin, str1)) {
        getline(cin, str2);
        int alphabet1[26]={0}, alphabet2[26]={0};
        // Calculate alphabet length of the string 1.
        for (int i = 0; i < str1.length(); i++) {
            alphabet1[int(str1[i])-int('a')]++;
        }
        // Calculate alphabet length of the string 2.
        for (int i = 0; i < str2.length(); i++) {
            alphabet2[int(str2[i])-int('a')]++;
        }
        for (int i = 0; i < 26; i++) {
            if (alphabet1[i]!=0 && alphabet2[i]!=0) {
                if (alphabet1[i] <= alphabet2[i]) {
                    for (int j = 0; j < alphabet1[i]; j++) {
                        cout << alphabet[i];
                    }
                } else {
                    for (int j = 0; j < alphabet2[i]; j++) {
                        cout << alphabet[i];
                    }
                }
            }
        }
        cout << '\n';
    }
    return 0;
}