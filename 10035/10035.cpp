#include <iostream>
#include <math.h>

using namespace std;

int main() {
    cin.tie(0);
    while (true) {
        int a, b, len, carry = 0;
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        len = int(log10(a>b?a:b))+1;
        for (int i = 1; i <= len; i++) {
            long long factor = pow(10, i), sum = 0;
            sum = a%factor + b%factor;
            if (sum >= factor)
                carry++;
        }
        if (carry == 0)
            cout << "No carry operation.\n";
        else if (carry == 1)
            cout << "1 carry operation.\n";
        else
            cout << carry << " carry operations.\n";
    }
    return 0;
}

/* **************************************************************************
 * Steps:
 * 1. calculate the given integer length := len                             *
 * 2. divide the given integer from one to len length                       *
 * 3. sum the diveded integers                                              *
 * 4. compare the sum and 10^len, if sum is bigger, the carry will add one  *
 * **************************************************************************/