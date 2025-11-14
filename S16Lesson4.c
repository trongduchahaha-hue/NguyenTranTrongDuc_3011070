#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World! Programming is fun!";
    char kyTu;
    int dem = 0;
    
    printf("Chuoi da khai bao: \"%s\"\n", str);
    printf("Nhap vao mot ky tu: ");
    scanf("%c", &kyTu);
    int i;
    for ( i = 0; i < strlen(str); i++) {
        if (str[i] == kyTu) {
            dem++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", kyTu, dem);
    
    return 0;
}
