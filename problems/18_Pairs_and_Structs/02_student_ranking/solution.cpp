#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int score;
};

int main() {
    int n;
    cin >> n;
    vector<Student> v(n);
    for (auto &s : v) cin >> s.name >> s.score;
    sort(v.begin(), v.end(), [](const Student &a, const Student &b) {
        if (a.score != b.score) return a.score > b.score;
        return a.name < b.name;
    });
    for (auto &s : v) cout << s.name << " " << s.score << "\n";
    return 0;
}
