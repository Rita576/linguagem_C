#include <stdio.h>
#include <stdlib.h>

//Questao 9 : Ler a idade de 10 alunos e exibir quantos alunos tem idade maior que 20.
//Calcule e apresente a média das idades destes alunos.

 main () {
 	
 	    int idade,i,maior,soma;
 	    float media;
 	    
 	   idade=0;
 	   i = 0;
	   maior = 0;
	   soma = 0;
	   media=0; 	 
	   
	     for(i = 1; i <= 10 ; i++) {
 	   	 printf("Digite a idade: \n");
 	     scanf ("%d",&idade);
 	 
 	     if(idade > 20) {
 	     	 soma = idade+soma; 
 	     	 maior= maior+1;	   
		     media = soma/maior ;
		 }
	}
		  printf ("Alunos maiores de 20 anos %d\n", maior);
		  printf("A media das idades eh: %1.f", media);
		  
 	   	
		}
 	
 	
 	
 	
 	
 	
 
