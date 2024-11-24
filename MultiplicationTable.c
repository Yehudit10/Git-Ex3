#include <stdio.h>

int main() {
    int i, j;
     printf("Multiplication Table:\n");
    printf("AB change:\n");
    printf("\n     ");
    for (i = 1; i <= 10; i++) {
        printf("%4d", i);
    }
    printf("\n");
    for (i = 1; i <= 10; i++) {
        printf("%4d", i);
        for (j = 1; j <= 10; j++) {
            printf("%4d", i * j); 
        }
        printf("\nABconflictOK"); 
    }
}
