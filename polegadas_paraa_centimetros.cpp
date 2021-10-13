#include<stdio.h>
#include<stdlib.h>

main()
{
 float  c,pol, i;
 
 printf ("De polegadas para centimentros: \n");

 for (pol=1; pol<=20; pol++){
        c += 2.54;
 printf("%2.f = %1.2f\n",pol,c);
 }
}

