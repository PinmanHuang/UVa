#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cin.tie(0);
    char a[1000];
    while(cin >> a){
        if (strlen(a)==1 && a[0]=='0')
            break;
        int even = 0, odd = 0, d;
        for(int i = 0; i < strlen(a); i++) {
            if (i%2 == 0)
                even += (a[i]-'0');
            else
                odd += (a[i]-'0');
        }
        d = (even>odd?(even-odd):(odd-even));
        if (d%11==0)
            cout << a << " is a multiple of 11." << '\n';
        else
            cout << a << " is not a multiple of 11." << '\n';
    }
    
    return 0;
}