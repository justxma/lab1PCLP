#include <stdio.h>

int fact(int n){
    if(n == 0) return 1;
    return n * fact(n-1);
}

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d" , &n);
    int fct = fact(n);
    printf("%d\n", fct);
    return 0;
}