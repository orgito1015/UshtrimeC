#include <stdio.h>

int main() {
    int n;
    printf("Shkruani madh�sin� e vektorit: ");
    scanf("%d", &n);

    int vektor[n];
    printf("Futni elementet e vektorit:\n");
    for (int i = 0; i < n; i++) {
        printf("Elementi %d: ", i + 1);
        scanf("%d", &vektor[i]);
    }

    printf("Elementet e vektorit jan�: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vektor[i]);
    }
    printf("\n");

    return 0;
}

