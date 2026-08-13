#include <stdio.h>
#include <string.h>
int main(){
    // Opening A File In C Programming !
    FILE *fpt;
    char anbu[100];
    fpt = fopen("p_files\\file1.txt","w");
    printf("Enter A String:");
    gets(anbu);
    for (int i = 0;i<= strlen(anbu); i++) {
     fputc(anbu[i] ,fpt);
    }
    
    if(fpt==NULL){
        printf("File Not created !");
    }
    else {
        printf("File Created Sucessfully !");
    }
    fclose(fpt);
}
