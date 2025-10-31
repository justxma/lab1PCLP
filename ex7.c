#include <stdio.h>

int main(){
    int a ; 
    int div = 0;
    int cont = 0;
    while(scanf){
        if(a <=0 ) break;
        div = 0;
        scanf("%d" , &a);
        printf("OUT: ");
        if(a == 1 && a == 2){
            printf("PRIM\n");
        }
        for(int i = 2 ; i <= a/2 ; i++){
            if(a % i == 0) {
                div++;
                printf("%d " , i);

            }
            if(i == a/2) printf("\n"); 
        }
        if(div == 0){
            printf("\bPRIM\n");
            cont++;
        }

    }
    printf("OUT: S-au gasit %d numere prime\n" , cont-1);
    return 0;
}