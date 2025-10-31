#include <stdio.h>
#include <math.h>

int main(){
    int n ;
    scanf("%d" , &n);
    //prima metoda
    if(n % 2 == 0){
        printf("Numarul este par\n");
    }
    //a doua metoda
    if((n%10) % 2 == 0){
        printf("Par\n");
    }
    return 0;
}