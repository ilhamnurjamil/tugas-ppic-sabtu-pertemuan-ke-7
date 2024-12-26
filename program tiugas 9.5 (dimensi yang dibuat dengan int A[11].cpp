#include <stdio.h>

int main() {
    int A[11];
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int i;

    int jumlah_data = sizeof(data) / sizeof(data[0]);
    if (jumlah_data > 11) {
        printf("Jumlah data melebihi kapasitas array A.\n");
        return 1;
    }

    for (i = 0; i < jumlah_data; i++) {
        A[i] = data[i];
    }

    printf("Isi array A:\n");
    for (i = 0; i < jumlah_data; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

        printf("\nContoh akses langsung:\n");
        printf("Nilai pada index ke 0 adalah %d\n", A[0]);
        printf("Nilai pada index ke 5 adalah %d\n", A[5]);
        printf("Nilai pada index ke terakhir (%d) adalah %d\n", jumlah_data -1 , A[jumlah_data-1]);

    return 0;
}
