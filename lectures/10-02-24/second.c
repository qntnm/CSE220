#include <stdio.h>
#include <stdlib.h>

int main(){
    char fileName[] = "file3.txt";
    FILE* fp = NULL;
    fp = fopen(fileName,"r");
    if(fp==NULL){
        fprintf(stderr,"Cannot open %s.\n", fileName);
        exit(1);

    }
    char c;
    while ((c=fgetc(fp)) != EOF){
        printf("%c",c);
    }
    printf("\n");
    fclose(fp);
    return 0;
}