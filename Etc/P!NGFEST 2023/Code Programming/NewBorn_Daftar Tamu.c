#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Pembanding
int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int n;
    printf("Jumlah tamu: "); // get input
    scanf("%d", &n);
    getchar();

    char namaTamu[1000];
    printf("Nama-nama tamu: ");
    fgets(namaTamu, sizeof(namaTamu), stdin);
    namaTamu[strcspn(namaTamu, "\n")] = '\0';

    // split
    char *token = strtok(namaTamu, " ");
    char **daftarTamu = (char **)malloc(n * sizeof(char *));

    int i = 0;
    while (token != NULL) {
        daftarTamu[i] = strdup(token);
        token = strtok(NULL, " ");
        i++;
    }

    // sorting nama
    qsort(daftarTamu, n, sizeof(char *), compare);
    for (int j = 0; j < n; j++) {
        printf("%s\n", daftarTamu[j]);
    }

    return 0;
}
