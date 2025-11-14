#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100]; 
    
    printf("Nhap vao mot chuoi bat ki: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    if (chuoi[strlen(chuoi) - 1] == '\n') {
        chuoi[strlen(chuoi) - 1] = '\0';
    }
    
    printf("Chuoi vua nhap: %s\n", chuoi);
    
    printf("do dai chuoi: %d\n", (int)strlen(chuoi));
    
    return 0;
}
