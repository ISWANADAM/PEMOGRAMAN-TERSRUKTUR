#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }
    fprintf(file, "Pekerjaan: Programmer\n");
    fclose(file);
    return 0;
}
