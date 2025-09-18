#include <stdio.h>

int main(void) 
{
    char name[100]; 
    int age;

    printf("Enter the name: ");
    scanf("%s", name); 

    printf("Enter the age: ");
    scanf("%d", &age); 

    printf("Hello %s, you are %d years old.\n", name, age);
    return 0;
}
