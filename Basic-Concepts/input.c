#include <stdio.h>

int main(){
    char a = getchar();
    printf("You entered : %c \n", a);
    putchar(a);
    // To get input of strings 
    
    char string[100];  
    // gets(string);  Dangerous - because we cannot mention the buffer size
    fgets(string, 100, stdin);
    printf("The string you entered : %s",string);

    puts(string); // Prints particularly string

    int z, b;
    printf("Enter two numbers :");
    scanf("%d %d", &z, &b);
    printf("\nSum of Numbers : %d", z+b);
    
    return 0;
}