//Pegue o maior e o menor número de um vetor
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    long long somaTotal = 0;
    int x, maiorNum, menorNum;

    for (int i = 0; i < N; i++) {
        cin >> x;
        somaTotal += x;

        if (i == 0) {
            maiorNum = x;
            menorNum = x;
        } else {
            if (x > maiorNum) maiorNum = x;
            if (x < menorNum) menorNum = x;
        }
    }

    cout << somaTotal << "\n";
    cout << maiorNum << "\n";
    cout << menorNum << "\n";

    return 0;
}
