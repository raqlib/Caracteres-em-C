#include <stdio.h>

char a,b;

int main(){
    printf("Introduza um caractere: ");
    scanf("%c", &a);
    getchar(); 

    printf("Introduza outro caractere: ");
    scanf("%c", &b);

    printf("Voce escreveu: %d %d", a, b);
    return 0;
}