#include <stdio.h>

int main() {
    int n;
    
    printf("Berapa banyak kata 'P!NGFEST' ingin diulang? : ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("P!NGFEST\n");
    }
    
    return 0;
}
