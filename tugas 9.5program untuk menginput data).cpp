#include <stdio.h>

int main() {
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int genap[11];
    int jumlah_genap = 0;
    int jumlah_data = sizeof(data) / sizeof(data[0]);
    int i;

    printf("Data dari dokumen:\n");
    for (i = 0; i < jumlah_data; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    for (i = 0; i < jumlah_data; i++) {
        if (data[i] % 2 == 0) {
            genap[jumlah_genap] = data[i];
            jumlah_genap++;
        }
    }

    printf("\nIsi array genap:\n");
    if (jumlah_genap > 0) {
        for (i = 0; i < jumlah_genap; i++) {
            printf("%d ", genap[i]);
        }
    } else {
        printf("Tidak ada angka genap dalam data.\n");
    }
    printf("\n");

        printf("\nContoh format output sesuai soal:\n");
        if (jumlah_genap > 0) {
            for (i = 0; i < jumlah_genap; i++) {
                printf("%d", genap[i]);
                if(i < jumlah_genap -1){ 
                    printf(" ");
                }
            }
        } else {
            printf("Tidak ada angka genap dalam data.\n");
        }
        printf("\n");

    return 0;
}
