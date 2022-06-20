//Ejercicio 34
#include <stdio.h>
int main()
{
	int n,suma_dig=0;
	
	printf("Digite un numero: ");
	scanf("%i", &n);

	int num= n;
	while (n!=0){
		suma_dig= suma_dig+(n%10);
		n= n/10;
	}
	printf("la suma de los digitos de n% es: %n", num, suma_dig);
	return 0;
	}
		
