#include <stdio.h>
#include <stdlib.h>

//Construa um algoritmo em C que receba um n�mero e verifique se ele � um n�mero triangular. 
//(Um n�mero � triangular quando � resultado do produto de tr�s n�meros consecutivos.
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
