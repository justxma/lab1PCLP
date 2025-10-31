#include <stdio.h>

int main(){
    short int a;
    int b;
    long int c;
    printf("%lu\n",sizeof(a));
    printf("%lu\n",sizeof(b));
    printf("%lu\n",sizeof(c));

    int x = sizeof(short int);
    int y = sizeof(int);
    int z = sizeof(long int);
    printf("%d " , x);
    printf("%d " , y);
    printf("%d \n" , z); 
    return 0;
}