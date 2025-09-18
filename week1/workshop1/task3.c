#include <stdio.h>
int main(int argc, char *argv[])
{
    for (int n = 1; n <= 100; n++) {
        if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0) {
            if (n % 2 == 0) printf("Bish");
            if (n % 3 == 0) printf("Bash");
            if (n % 5 == 0) printf("Bosh");
            printf("\n");
        } else {
            printf("%d\n", n);
        }
    }
    return 0;
}
