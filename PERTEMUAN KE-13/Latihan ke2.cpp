#include <stdio.h>

int main() {
    FILE *file = fopen("daftar_mahasiswa.txt", "r");
    char baris[100];

    if (file == NULL) {
        printf("Gagal membuka file atau file belum dibuat.\n");
        return 1;
    }

    printf("Isi file daftar_mahasiswa.txt:\n\n");
    while (fgets(baris, sizeof(baris), file) != NULL) {
        printf("%s", baris);
    }

    fclose(file);
    return 0;
}
