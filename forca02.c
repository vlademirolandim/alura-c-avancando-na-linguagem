#include <stdio.h>

int main(){
    char letra[20];

    letra[0] = 'M';
    letra[1] = 'E';
    letra[2] = 'L';
    letra[3] = 'A';
    letra[4] = 'N';
    letra[5] = 'C';
    letra[6] = 'I';
    letra[7] = 'A';

    for ( int x=0; x < 8; ++x ){
        printf( "%c" , letra[x] );
    }
    printf("\n");

}