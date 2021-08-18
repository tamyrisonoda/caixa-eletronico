

#include <stdio.h>

/* Numero de cedulas de B$50,00 */
int n50 = 0;
	
/* Numero de cedulas de B$20,00 */
int n20 = 0;

/* Numero de cedulas de B$5,00 */
int n5 = 0;
	
/* Numero de cedulas de B$1,00 */
int n1 = 0;


int fazRetirada(int valor) {
n50 = 0;
n20 = 0;
n5 = 0;
n1 = 0;

 do {
 
 	if (valor>0){

 	
 	if (valor>=50){
 		valor = valor - 50;
 		n50 = n50+1;
	 }
	 
	 else if (valor<50 && valor >=20){
	 	valor = valor - 20;
	 	n20 = n20+1;
	 }
	 
	 else if (valor<20 && valor >=5){
	 	valor = valor-5;
	 	n5 = n5+1;
	 	 }
	 	 
	 	else if (valor <5 && valor >=0){
	 		valor = valor - 1;
	 		n1 = n1 + 1;
	 	}
	 }
	 	else if (valor<=0){
	 		n50 = -1;
	 		n20 = -1;
	 		n5 = -1;
	 		n1 = -1;
		 }
}

while (valor>0);
return (n50, n20 ,n5 , n1);
}


int main() {
 
	int valor;

	valor = 165;
	fazRetirada(valor);
	printf("Valor: %i\n",valor);
	printf("Notas de 50: %i\n", n50);
	printf("Notas de 20: %i\n", n20);
	printf("Notas de 5:  %i\n", n5);
	printf("Notas de 1:  %i\n", n1);
	
	
	valor = 0;
	fazRetirada(valor);
	printf("Valor: %i\n",valor);
	printf("Notas de 50: %i\n", n50);
	printf("Notas de 20: %i\n", n20);
	printf("Notas de 5:  %i\n", n5);
	printf("Notas de 1:  %i\n", n1);

	valor = -21;
	fazRetirada(valor);
	printf("Valor: %i\n",valor);
	printf("Notas de 50: %i\n", n50);
	printf("Notas de 20: %i\n", n20);
	printf("Notas de 5:  %i\n", n5);
	printf("Notas de 1:  %i\n", n1);
	
	valor = 993;
	fazRetirada(valor);
	printf("Valor: %i\n",valor);
	printf("Notas de 50: %i\n", n50);
	printf("Notas de 20: %i\n", n20);
	printf("Notas de 5:  %i\n", n5);
	printf("Notas de 1:  %i\n", n1);
	return 0;
}
