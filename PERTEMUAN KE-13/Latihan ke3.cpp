#include <stdio.h>

int main() {
    int jumlah;
    char nama[100];

    printf("Masukkan jumlah mahasiswa yang ingin ditambahkan: ");
    scanf("%d", &jumlah);
    getchar();

    FILE *file = fopen("daftar_mahasiswa.txt", "a");
    if (file == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }

    for (int i = 0; i < jumlah; i++) {
        printf("Masukkan nama mahasiswa ke-%d: ", i + 1);
        fgets(nama, sizeof(nama), stdin);
        fprintf(file, "Mahasiswa Baru: %s", nama);
    }

    fclose(file);
    printf("Data mahasiswa baru berhasil ditambahkan ke dalam file.\n");

    return 0;
}
