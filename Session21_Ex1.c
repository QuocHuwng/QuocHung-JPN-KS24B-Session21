#include <stdio.h>  

int main() {  
    FILE *file; 
    char input[199]; 

    file = fopen("bt01.txt", "w");  
    if (file == NULL) {  
        printf("Khong the mo file de ghi.\n");  
        return 1;  
    }  
    printf("Nhap mot chuoi bat ky: ");  
    fgets(input, sizeof(input), stdin);  
    fprintf(file, "%s", input);  
        fclose(file);  
    printf("Chuoi da duoc ghi vao bt01.txt .\n");  
    return 0;  
}
