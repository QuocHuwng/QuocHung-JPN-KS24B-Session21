#include <stdio.h>  

int main() {  
    FILE *myFile = fopen("bt01.txt", "r"); 
    if (myFile == NULL) { 
        printf("Khong mo duoc file\n");  
        return 0;  
    }  
    char character; 
    character = fgetc(myFile);  
    
    if (character != EOF) { 
        printf("Ky tu dau tien trong file la: %c\n", character);  
    } else {  
        printf("File r?ng.\n");  
    }  
    fclose(myFile); 
    return 0;  
}
