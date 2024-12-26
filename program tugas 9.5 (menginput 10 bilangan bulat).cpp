#include <stdio.h>

int main() {
    int nilai[10];
    int i;

    printf("Masukkan nilai 10 mahasiswa:\n");
    for (i = 0; i < 10; i++) {
        printf("Mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);

          if (nilai[i] < 0 || nilai[i] > 100) {
            printf("Nilai tidak valid. Masukkan nilai antara 0-100.\n");
            i--; 
            continue;
        }
    }

    printf("\nDaftar nilai mahasiswa yang lulus (nilai >= 60):\n");
    int ada_yang_lulus = 0;
    for (i = 0; i < 10; i++) {
        if (nilai[i] >= 60) {
            printf("Mahasiswa ke-%d: %d\n", i + 1, nilai[i]);
            ada_yang_lulus = 1; 
        }
    }

    if (!ada_yang_lulus) {
        printf("Tidak ada mahasiswa yang lulus.\n");
    }

    return 0;
}
