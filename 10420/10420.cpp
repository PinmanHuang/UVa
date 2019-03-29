#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    cin.tie(0);
    int n;
    cin >> n;
    map<string, int> c_map;
    map<string, int>::iterator it;
    for(int i = 0; i < n; i++) {
        string country, name;
        cin >> country;
        getline(cin, name);
        it = c_map.find(country);
        if(it != c_map.end())
            c_map[country]++;
        else
            c_map[country] = 1;
    }
    for(it = c_map.begin(); it != c_map.end(); it++)
        cout << it->first << ' ' << it->second << '\n';
    return 0;
}

/*********************************************************
 * 1. cin for the first word.
 * 2. getline for else words.
 * 3. using map, which is red-black-tree.                   *
 * ref: http://www.cplusplus.com/reference/map/map/find/ *
 *********************************************************/