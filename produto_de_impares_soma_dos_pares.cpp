#include<stdio.h>
#include<stdlib.h>

//Criar um algoritmo em C que receba vários números inteiros e positivos e
//imprima o produto dos números ímpares digitados e a soma dos pares. O
//algoritmo encerra quando o zero ou um número negativo é digitado.

main()
{
	   int par,num,impar,i,somap,produ;
	   
	        impar = 0;
	        par = 0;
	        somap=0;
	        produ=1;
	     
	      for (i = 1; num !=0 && num > 0 ; i++){
	      	printf("Digite um numero: ");
	            scanf("%d",&num);
	            
	      if (num % 2 == 0 ){
	    	 par = par+1 ;
	    	 somap = somap+num;
			 	 
		}
		  if (num % 2 != 0 ){
	    	 impar = impar+1 ;
	    	 produ = num*produ;
			 }
	
}
	        printf("Os numeros pares sao: %d\n",par);
		    printf("Os numeros impares sao: %d\n",impar);
		    printf("O produto dos numeros impares eh: %d\n",produ);
		    printf("A soma dos pares eh:%d\n",somap);
		    
	
}
