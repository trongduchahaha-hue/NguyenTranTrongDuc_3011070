#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World!";
    
    printf("Chuoi ban dau: %s\n", str);
    printf("Chuoi dao nguoc: ");
    int i;
    for ( i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    
    printf("\n");
    
    return 0;
}
