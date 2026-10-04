#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int v = 0, c = 0;
    for (char ch : s) {
        if (string("aeiou").find(ch) != string::npos) v++;
        else if (isalpha((unsigned char)ch)) c++;
    }
    cout << v << " " << c << "\n";
    return 0;
}
