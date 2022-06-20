//Ejercicio 27
#include <stdio.h>

int main(){
	int x,sum=0;

	printf("/n");
	
	for(x=0;x<=100;x++){
		sum=sum+x;
		printf("%i,",x);
		}
		printf("/n,La suma de todos los numeros del 0 al 100 es: %i",sum);
		return 0;

	}
