#include <stdio.h>

int main() {
    int i, shuma = 0, numri = 3;

    // P�rdorim nj� cik�l p�r t� llogaritur shumen e seris� p�r 300 termat e par�
    for (i = 1; i <= 300; i++) {
        if (i % 2 != 0) {
            // Kur indeksi �sht� tek (1, 3, 5, ...) (pozitive)
            shuma += numri;
        } else {
            // Kur indeksi �sht� �ift (2, 4, 6, ...) (negative)
            shuma -= numri;
        }

        // P�rshtat numrin p�r n� termet e ardhshme
        numri += 2;
    }

    // Shfaqim rezultatin e shumes
    printf("Shuma e serise per 300 termat e pare eshte: %d\n", shuma);

    return 0;
}

