#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    string week[7]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int month[12]={6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    int len, m, d;
    cin >> len;
    while (len!=0) {
        cin >> m >> d;
        cout << week[((d-1)%7+month[m-1])%7] << '\n';
        len--;
    }
    return 0;
}