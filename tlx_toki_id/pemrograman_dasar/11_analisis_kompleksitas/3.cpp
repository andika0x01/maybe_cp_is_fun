#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int r_terbaik = 1;
    int c_terbaik = n;

    for (int r = 1; r <= n; r++) {
        if (n % r == 0) {
            int c = n / r;
            if (r <= c) {
                if ((c - r) < (c_terbaik - r_terbaik)) {
                    r_terbaik = r;
                    c_terbaik = c;
                }
            }
        }
    }

    cout << r_terbaik << " " << c_terbaik << endl;

}