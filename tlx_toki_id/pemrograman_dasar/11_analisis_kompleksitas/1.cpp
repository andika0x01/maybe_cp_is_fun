#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long total = 0;
    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    for (int i = 0; i < n; i++) {
        cout << total - a[i] << endl;
    }
}