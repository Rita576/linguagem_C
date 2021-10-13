#include <stdio.h>
#include <stdlib.h>

//Construa um algoritmo em C que receba um número e verifique se ele é um número triangular. 
//(Um número é triangular quando é resultado do produto de três números consecutivos.
// Exemplo: 24 = 2 x 3 x 4)

main()
 {
      int n,n1,pro;
      
         pro = n1 * (n1 + 1) * (n1 + 2);
                
				while (pro < 1000){
                   n1++;
         pro = n1 * (n1 + 1) * (n1 + 2);
             }
            
     
 }
