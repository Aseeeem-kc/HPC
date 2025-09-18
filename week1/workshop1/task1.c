#include <stdio.h>

int main(int argc, char *argv[]) 
{
    if (argc != 3) {
        printf("Usage: %s <name> <age>\n", argv[0]);
        return 1;
    }
    
    char *name = argv[1];
    int age;
    sscanf(argv[2], "%d", &age);
    
    printf("Hello %s, you are %d years old.\n", name, age);
    return 0;
}
