#include <stdio.h>
#include <string.h>
int main(){
    FILE *fp;
    char anbu[100];
    fp = fopen("p_files\\file1.txt","w");
    printf("Enter A String:");
    gets(anbu);
    for (int i = 0;i<= strlen(anbu); i++) {
     fputc(anbu[i] ,fp);
    }
    
    if(fp==NULL){
        printf("File Not created !");
    }
    else {
        printf("File Created Sucessfully !");
    }
    fclose(fp);
}
