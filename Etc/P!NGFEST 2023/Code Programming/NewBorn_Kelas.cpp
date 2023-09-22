#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Jumlah siswa: ";
    std::cin >> n;

    std::vector<int> tinggi(n);
    std::cout << "Tinggi siswa:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> tinggi[i];
    }

    int A, B;
    std::cout << "Masukkan nilai A dan B: ";
    std::cin >> A >> B;

    int jumlahX = 0, jumlahY = 0;

    for (int i = 0; i < n; i++) {
        if (tinggi[i] > A) {
            jumlahX++;
        } else if (tinggi[i] < B) {
            jumlahY++;
        }
    }

    std::cout << "Jumlah siswa di kelompok X: " << jumlahX << std::endl;
    std::cout << "Jumlah siswa di kelompok Y: " << jumlahY << std::endl;

    return 0;
}
