#include <iostream>
using namespace std;

// Fun��o hash auxiliar
int hash_aux(int k, int m) {
    return k % m;
}

// Fun��o hash1 para sondagem linear
int hash1(int k, int i, int m) {
    return (hash_aux(k, m) + i) % m;
}

int main() {
    int k, m;
    cin >> k >> m;

    cout << "Posi��es da sondagem linear: ";
    for (int i = 0; i < m; i++) {
        cout << hash1(k, i, m) << " ";
    }
    cout << endl;

    return 0;
}