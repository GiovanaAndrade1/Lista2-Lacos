#include <iostream>
using namespace std;

int VerificaPopulacao() {
    float popA = 80000;
    float popB = 200000;
    int Anos = 0;

    while (popA <= popB) {
        popA += popA * 0.03;
        popB += popB * 0.015;
        Anos++;
    }

    return Anos;
}

int main() {
    int AnoTotal = VerificaPopulacao();

    cout << "O país A ultrapassará a população do país B em " << AnoTotal << " anos." << endl;
    return 0;
}
