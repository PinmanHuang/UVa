#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    string input;
    while(getline(cin, input)){
        if (input == "0")
            break;
        int sum = 0;
        /*************************
        * 1. Sum all digits.     *
        **************************/
        for (int i=0; i<input.length(); i++) {
            sum += (int(input[i])-int('0'));
        }
        /********************************************
        * 2. Check if the length of integer is 1.   *
        *********************************************/
        while (sum/10 != 0){
            sum = (sum/10) + (sum%10);
        }
        cout << sum << '\n';
    }
    return 0;
}