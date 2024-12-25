#include <stdio.h>  

int main() {  
    FILE *myFile = fopen("bt01.txt", "r");  
    if (myFile == NULL) {  
        printf("Khong mo duoc file\n");  
        return 0;  
    }  
    char line[199];  
    if (fgets(line, sizeof(line), myFile) != NULL) {  
        printf("Dong dau tien trong file la: %s", line);  
    } else {  
        printf("File khong co noi dung.\n");  
    }  
    fclose(myFile);   
    return 0;  
}
