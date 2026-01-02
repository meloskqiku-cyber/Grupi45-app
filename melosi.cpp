#include <iostream>
#include <vector>
using namespace std;

void lexoNotat(vector<int>& notat, int n) {
    int nota;
    for (int i = 0; i < n; i++) {
        cout << "Shkruaj noten " << i + 1 << ": ";
        cin >> nota;
        notat.push_back(nota);
    }
}
int main() {
    int n;
    vector<int> notat;

    cout << "Sa nota do te fusni? ";
    cin >> n;

    lexoNotat(notat, n);

    cout << "Notat e futura jane: ";
    for (int nota : notat) {
        cout << nota << " ";
    }

    return 0;
}
