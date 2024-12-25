#include <stdio.h>  

int main() {  
    FILE *myFile = fopen("bt01.txt", "a");  
    if (myFile == NULL) {  
        printf("Khong mo duoc file\n");  
        return 0;  
    }  
    char input[199];  
    printf("Nhap mot chuoi de ghi vao file: ");  
    fgets(input, sizeof(input), stdin);  
    fprintf(myFile, "%s", input);  
    fclose(myFile);   
    printf("Chuoi da duoc ghi vao bt01.txt thanh cong.\n");  
    return 0;  
}
