#include <stdio.h>
int main(){
int a,b;
int* ptr;
a = 2;
ptr= &a;
printf("a = %d\n",a);
printf("ptr = %p\n", ptr);
printf("&b = %p\n",&b);
b = *ptr;
printf("b= %d\n",b);
}