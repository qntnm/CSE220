#include <stdio.h>
int main(){
    char firstName[30];
    int num;
    printf("Enter your first name:\n");
    scanf("%s",firstName);
    printf("Enter an integer: ");
    scanf("%d",&num);

    printf("Hello %s, your number is %d\n",firstName,num);

}