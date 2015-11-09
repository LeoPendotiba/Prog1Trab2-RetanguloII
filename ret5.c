#include <stdio.h>
#include <string.h>

//*********************************************************
//* Trabalho 2 de Programação de Computadores I - retângulo
//* Curso de Sistemas da Informação
//* Aluno: Leonardo Pacheco - matricula: 50013523
//* Professor: Alex Salgado
//*******************************************************//


int main()
{
     
     char continuar, caracter;
     int altura, alt, largura, lar;
     int retangulo = 0;
     
    
    while(retangulo == 0 )
        {
        
        printf("Digite a altura do retângulo.\n");
        scanf("%d", &altura);
        printf("Digite a largura do retângulo.\n");
        scanf("%d", &largura);
        printf("Digite o caracter que deseja utilizar:\n");
        scanf(" %c", &caracter);
        printf("Olá, meu nome é Leonardo Pacheco e o retangulo ficou assim:\n");
        
        for( alt; alt < altura; alt++ )
                {
            for( lar; lar < largura; lar++ )
                {
                if( alt == 0 || alt == altura - 1 || lar == 0 || lar == largura - 1)
                 {
                    printf(" %c ", caracter);
                }
                     else
                 {
                    printf("   ");
                }   
            }
            
            lar = 0;
            printf( "\n" );
        }
        
        printf("Deseja continuar (s/n)?\n");
        scanf(" %c", &continuar);
        
        if( continuar == 'n' )
        {
            retangulo = 1;
        }
        
        altura = 0;
        largura = 0;
        alt = 0;
        
        }

    return 0;
} 