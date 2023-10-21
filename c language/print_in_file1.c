#include<stdio.h>
#include<string.h>



int main(){
    FILE *fptr;
    fptr=fopen("print.txt","w");
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 'g');
    fprintf(fptr, "%c", 'o');
    fclose(fptr);

    fptr=fopen("print.txt", "r");
    char ch;
    fscanf(fptr, "%c",&ch);
    printf("%c",ch);
    fscanf(fptr, "%c",&ch);
    printf("%c",ch);
    fscanf(fptr, "%c",&ch);
    printf("%c",ch);
    fscanf(fptr, "%c",&ch);
    printf("%c",ch);
    fscanf(fptr, "%c",&ch);
    printf("%c",ch);
    
    fclose(fptr);
    
    
    return 0;
}