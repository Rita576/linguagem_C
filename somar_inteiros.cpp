#include <stdio.h>
#include <stdlib.h>

// Fa�a um algoritmo que leia um n�mero N, some todos os n�meros inteiros de
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
