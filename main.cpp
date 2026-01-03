#include <vector>
using namespace std;

int maksimum (const vector<int>& notat) {
    int max = notat[0];

    for (int i = 1; i < notat.size(); i++) {
        if (notat[i] > max) {
            max = notat[i];
        }
    }
    return max;
}
        