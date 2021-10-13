#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que leia um número N, some todos os números inteiros de
//1 a N, e mostre o resultado obtido.

    main () {
    	
    	int n,j,soma;
      
      printf ("Digite um numero: ");
       scanf ("%d", &n) ;
      
      for (j = 1, soma = 0; j <= n; j++){
      	  printf("%d\n",j);
      	  soma += j;
	  }
            
      	     
			printf("A soma dos numeros inteiros eh:%d", soma);
   
    	
    	
    	
    	
    	
    	
	}
