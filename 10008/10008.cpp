#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    int len, alphabet_len[26]={0}, max=0;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin >> len;
    /****************************************************************
    * 1. Count the number of A-Z alphabets from the input line.     *
    *****************************************************************/
    while(len>=0){
        string str;
        getline(cin, str);
        for (int i=0; i<str.length(); i++) {
            if (str[i]>='a' && str[i]<='z') {
                alphabet_len[int(str[i]-'a')]++;
            } else if (str[i]>='A' && str[i]<='Z') {
                alphabet_len[int(str[i]-'A')]++;
            }
        }
        len--;
    }
    /**********************************************
    * 2. Find the maximum count of alphabets.     *
    ***********************************************/
    for (int i = 0; i < 26; i++)
        max = (alphabet_len[i]>max?alphabet_len[i]:max);
    /****************************************************************
    * 3. Output the answer in the order of the count and alphabets. *
    *****************************************************************/
    while (max!=0) {
        for (int i=0; i<26; i++) {
            if (alphabet_len[i]==max) {
                cout << alphabet[i] << ' ' << alphabet_len[i] << '\n';
            }
        }
        max--;
    }
    return 0;
}