#include <iostream>
using namespace std;

int main() {
    int N;
    float nilai, totalNilai = 0, rataRata;
    int i = 1;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> N;

    do {
        cout << "Nilai Mahasiswa " << i << ": ";
        cin >> nilai;
        totalNilai += nilai; 
        i++;
    } while (i <= N); 

    rataRata = totalNilai / N;
    cout << "Total nilai: " << totalNilai << endl;
    cout << "Rata-rata nilai: " << rataRata << endl;

    return 0;
}
