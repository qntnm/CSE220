#include <stdio.h>
#include <stdlib.h>

int main(){
    char fileName[] = "file3.txt";
    FILE* fp = NULL;
    fp = fopen(fileName,"w");
    if(fp==NULL){
        fprintf(stderr,"Cannot open %s.\n", fileName);
        exit(1);

    }
    fputs("hello file!",fp);
    fclose(fp);
    return 0;
}