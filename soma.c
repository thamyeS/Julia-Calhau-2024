#include <stdio.h>
int main(){
        //Definição de variáveis
        int a, b, c, d, e;
        
		
		printf("Digite três números inteiros:\n");
		//Entrada
		scanf("%d %d %d %d", &a, &b, &c, &d, &e);
		
		
        //Processamento
        c = a + b;
        e = c * d;
        printf("A soma de a + b  = %d" , c);
        printf("a multplicação de c * d = %d", e);
        return 0;
    }
        
