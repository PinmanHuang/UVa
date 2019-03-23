#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    int a, b, max;
    while(cin >> a >> b){
        cout << a << ' ' << b << ' ';
        if (a>b) {
            int tmp = a;
            a = b;
            b = tmp;
        }
        max = 0;
        for(int i = a; i <= b; i++) {
            int n = i, cycle = 1;
            while(n!=1){
                if (n%2==1)
                    n = 3*n+1;
                else
                    n = n/2;
                cycle++;
            }
            if (cycle>max)
                max = cycle;
        }
        cout << max << '\n';
    }
    return 0;
}