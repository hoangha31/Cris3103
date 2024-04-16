#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 20, b = 25, c = 30;
    const int* pA = &a;
    int* const pB = &b;
    const int* const pC = &c;

    *pA += 1;

    *pB += 1;
    *pC += 1;

    pA = NULL;
    pB = NULL;

    pC = NULL;


}
