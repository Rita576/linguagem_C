#include <stdio.h>
#include <stdlib.h>
//A convers�o de graus Fahrenheit para centigrados � obtida
//pela formula C= 5/9(f-32). Escreva um algoritmo que 
//calcula e escreva a tabela de graus cent�grados em fun��o de graus Fahrenheit que variem de 50 a 150 de 1 em 1


main() {
	 
	 int fah,i ;
	 float C;
	
	 
	 for(fah = 50; fah <= 150; fah++ ){  
	      C =(fah-32)*5/9;
	 printf("\n%d %f\n", fah, C);
	   	
	   	
	
}
}
