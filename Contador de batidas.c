#include <stdio.h>
#include <stdlib.h>

int main () {
float idade, batidas, segundo, hora, dia, anos;
 segundo = 1 ;
 hora = 60;
 dia = 24;
 anos = 365,25;
 
printf ("insira sua idade:\n");
scanf("%f", &idade);

batidas = segundo * hora * dia * anos;

printf ("quantidade de batidas: %2.f\n", batidas);

 
}
  
