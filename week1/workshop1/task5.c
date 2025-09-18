#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    printf("Enter a number between 1 and 50: ");
    scanf("%d", &n);


    int *numbers = (int *)malloc(n * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        numbers[i] = rand();
        printf("%d is %d\n", i, numbers[i]);
    }

    free(numbers);
    return 0;
}
