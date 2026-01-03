#include <iostream>
#include <vector>
using namespace std;

void lexoNotat(vector<int>& notat, int n) {
    int nota;

    for (int i = 0; i < n; i++) {
        while (true) {
            cout << "Nota #" << i + 1<<":";
            cin >> nota;

            if (nota >= 5 && nota <= 10) {
                notat.push_back(nota);
                break;
            } else {
                cout << "Gabim! Nuk egziston note e tille.\n";
            }
        }
    }
}

int numeroKalues(const vector<int>& notat) {
    int numerimi = 0;

    for (int nota : notat) {
        if (nota >= 6 && nota <= 10) {
            numerimi++;
        }
    }

    return numerimi;
}

int main() {
    vector<int> notat;
    int n;

    cout << "Sa nota do te fusni? \n";
    cin >> n;

    lexoNotat(notat, n);

    cout << "\nNotat e futura: ";
    for (int nota : notat) {
        cout << nota << " ";
    }

    cout << "\n\nNumri i notave kaluese (prag >=50): "
         << numeroKalues(notat) << endl;

    return 0;
}