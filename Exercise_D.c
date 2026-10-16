/*
Nombre de programa : Ejercicio D Máquina expendedora
Autor : Salina Shah
Fecha : 14/10/2026 
*/
#include<stdio.h>
int main(void){
	//declare the variables 
	int precio;
	int dinero;
	int cambio;
	int cents200;
	int cents100;
	int cents50;
	int cents20;
	int cents10;
	int cents5;
	
	// ask for the price of the item
	printf("Precio (céntimos): ");
	scanf("%d",&precio);
	
	// ask for money 
	printf("Dinero introducido (céntimos):  ");
	scanf("%d", &dinero);
	
	 // if the user did not insert enough money, 
	 //tell them how much is missing and stop
	if(dinero < precio){
		
	 //calculate the change/cambio from the price to money /dinero
	 cambio=precio-dinero;
	 printf("Fondos insuficientes!  Faltan %d centavos.Programa terminate\n",cambio);
		
		return 0;
	}
	
	// calculate the change to return
	cambio=dinero-precio;
	printf("Cambio : %d centimos\n",cambio);
	
	//change of 200 cents
	cents200=cambio/200; 
	cambio= cambio % 200; 
	
	//change of 100 cents
	cents100=cambio/100;
	cambio= cambio % 100; 
	
	//change of 50 cents
	cents50=cambio/50;
	cambio= cambio % 50; 
	
	//change of 20 cents
	cents20=cambio/20;
	cambio= cambio % 20; 
	
	//change of 10 cents
	cents10=cambio/10;
	cambio= cambio % 10; 
	
	//change of 5 cents
	cents5=cambio/5;
	cambio= cambio %5; 
	
	// print the coins that needed
	if(cents200 >0){
		printf("%d moneda(s) de 200\n",cents200);
	}
	if(cents100 > 0){
		printf("%d moneda(s) de 100\n",cents100);
	}
	if(cents50 > 0){
		printf("%d moneda(s) de 50\n",cents50);
	}
	if(cents20 > 0){
		printf("%d moneda(s) de 20\n",cents20);
		
	} 
	if(cents10 > 0){
		printf("%d moneda(s) de 10\n",cents10);
	}
	if(cents5 > 0){
		printf("%d moneda(s) de 5\n",cents5);
	}else{
		printf("No hay moneda restante\n");
	}
	return 0;
	
}