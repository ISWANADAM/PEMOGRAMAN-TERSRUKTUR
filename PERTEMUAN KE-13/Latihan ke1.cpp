#include <stdio.h>

int main() {
    int jumlah;
    char nama[100];

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah);
    getchar();

    FILE *file = fopen("daftar_mahasiswa.txt", "w");
    if (file == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }

    for (int i = 0; i < jumlah; i++) {
        printf("Masukkan nama mahasiswa ke-%d: ", i + 1);
        fgets(nama, sizeof(nama), stdin);

        fprintf(file, "Mahasiswa %d: %s", i + 1, nama);
    }

    fclose(file);
    printf("Data mahasiswa berhasil disimpan ke dalam file.\n");

    return 0;
}
