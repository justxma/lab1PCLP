#include <stdio.h>

int main(){
    int a , ogl = 0;
    scanf("%d" , &a);
    int cpy = a;
    while(cpy){
        ogl = ogl * 10 + cpy % 10;
        cpy/=10;
    }
    if(a == ogl){
        printf("palindrom\n");
    }else{
        printf("Nu este palindrom\n");
    }
    return 0;
}