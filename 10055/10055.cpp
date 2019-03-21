#include <iostream>

using namespace std;

int main() {
    long long a, b;
    cin.tie(0); // The tied stream is an output stream object which is flushed before each i/o operation in this stream object.
    while(cin >> a >> b) {  // don't use eof which is detected by failing an input operation.
        //cout << abs(a-b) << endl;
        cout << (a>b? a - b: b - a) << '\n';
    }
    return 0;
}

// cin.eof ref: https://stackoverflow.com/questions/13343991/c-why-cin-eof-read-last-char-twice
// cin.tie(0) ref: http://chino.taipei/note-2016-0311C-%E7%9A%84%E8%BC%B8%E5%87%BA%E5%85%A5cin-cout%E5%92%8Cscanf-printf%E8%AA%B0%E6%AF%94%E8%BC%83%E5%BF%AB%EF%BC%9F/