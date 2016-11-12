#include <stdio.h>
#include <stdlib.h>
int main()
{
int prestados[10];
int k,librosTotal=0,mas=0,menos=0;
float promedio;
printf("\n Programa biblioteca");
for(k=0;k<=9;k++)
{
printf("\n Ingresar num de libros %i\n",k+1);
scanf ("%i",&prestados[k]);
librosTotal+=prestados[k];
}
promedio=(float)librosTotal/10;
printf ("\n El promedio es %.2f\n",promedio);
for(k=0;k<=9;k++)
{
if (prestados[k]>promedio)
{mas++;}
else if(prestados[k]<promedio)
{menos++;}
}
printf("\n%i dias se prestaron mas libros\n",mas);
printf("\n%i dias se prestaron menos libros\n",menos);
system("PAUSE");
return 0;
}
