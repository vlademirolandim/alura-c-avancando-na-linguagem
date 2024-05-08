#include <stdio.h>

int main(){

    char palavrasecreta[20];
/*
A função sprintf() é muito parecida com a printf(). 
Enquanto o printf imprime na tela, a sprintf imprime em um array de chars (o s** é justamente de **string). 
Então, se quisermos guardar a palavra secreta no array, fazemos:
*/
    sprintf( palavrasecreta , "MELANCIA" );
/*
Para imprimirmos na tela, usamos o printf com a máscara "s". Ela faz com que todo o array seja impresso. Veja:
*/    
    printf("%s", palavrasecreta);

}

