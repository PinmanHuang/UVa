#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int data_size;
    cin >> data_size;
    while(data_size) {
        int r_num;
        int s[500];
        cin >> r_num;
        for(int i=0; i<r_num; i++) {
            cin >> s[i];
        }
        sort(s, s+r_num);
        int mid = s[r_num/2];
        int sum = 0;
        for(int i=0; i<r_num; i++) {
            sum += abs(s[i]-mid);
        }
        cout << sum << endl;
        data_size--;
    }
}