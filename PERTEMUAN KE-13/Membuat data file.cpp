#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }
    fprintf(file, "Nama  : Iswan Adam\nAlamat: Jl.Durian, Gorontalo\nUmur  : 21\n");
    fclose(file);
    return 0;
}
