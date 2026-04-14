#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long r_terbaik = 1;
    long long c_terbaik = n;

    for (long long r = 1; r <= sqrt(n); r++) {
        if (n % r == 0) {
            long long c = n / r;
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