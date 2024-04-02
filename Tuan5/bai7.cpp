#include <iostream>
using namespace std;

void in_hoa_thi(int M, int N) {
    for (int i = 0; i < M; ++i)
        cout << " ";
    for (int i = 0; i < N; ++i)
        cout << "*";
}

void tam_giac_hoa_thi(int n) {
    for (int i = 1; i <= n; ++i) {
        in_hoa_thi(n - i, 2 * i - 1);
        cout << endl;
    }
}

int main() {
    int so_dong;
    cin >> so_dong;
    tam_giac_hoa_thi(so_dong);
    return 0;
}
