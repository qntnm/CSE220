#include <stdio.h>
#include <string.h>
int main(){
    char first_name[20] = "Jack";
    char last_name[20];
    strcpy(last_name,"Black");
    printf("first name: %s\n", *(first_name+4));
    printf("last name: %c.%c.\n",*(first_name+3),*(last_name+4));

    
}