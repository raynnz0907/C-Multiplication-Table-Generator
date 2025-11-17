#include <stdio.h>

int main() {
    int num, range;

    
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("Enter how many times you want to multiply it: ");
    scanf("%d", &range);

    
    printf("\nMultiplication Table of %d up to %d:\n", num, range);
    for(int i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
