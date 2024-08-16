#include <stdio.h>

// Fungsi untuk mencari nomor bebek pertama yang tidak mendapat coklat
int find_duck_without_chocolate(int C) {
    int duck_number = 1;
    while (C >= duck_number) {
        C = C - duck_number;
        duck_number++;
    }
    return duck_number;
}

int main() {
    int C;
    
    // Meminta pengguna untuk memasukkan jumlah coklat
    printf("Masukkan jumlah coklat: ");
    scanf("%d", &C);
    
    // Memanggil fungsi dan mencetak nomor bebek pertama yang tidak mendapat coklat
    int result = find_duck_without_chocolate(C);
    printf("Nomor bebek pertama yang tidak mendapat coklat adalah: %d\n", result);
    
    return 0;
}


