#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int r_terbaik = 1;
    int c_terbaik = n;

    for (int r = 1; r <= n; r++) {
        for (int c = r; c <= n; c++) {
            if (r * c == n) {
                if ((c - r) < (c_terbaik - r_terbaik)) {
                    r_terbaik = r;
                    c_terbaik = c;
                }
            }
        }
    }

    cout << r_terbaik << " " << c_terbaik << endl;
}