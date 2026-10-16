/*Nombre del programa: Ejercicio A. Carta de Blackjack 
Autor : Salina Shah
Fecha : 16/10/2026
*/

#include<stdio.h>
#include<ctype.h> 

int main(void){
	// the two characters that describe the card 
	char valor;
	char palo;
	//ask user their cards 
	printf("Introduce tu carta (valor palo): ");
	//get the value from user and save it
	scanf("%c %c", &valor,&palo);
	// toupper: convert lowercase letters to uppercase
	valor= toupper(valor);
	palo= toupper(palo);
	//check if the valor is valid
	if((valor !='A' && valor !='J' && valor !='K' && valor !='Q' && valor !='T') && (valor !='2' && valor !='3' && valor !='4' && valor !='5' && valor !='6' && valor !='7' && valor !='8' && valor !='9')){
	   printf("Carta inventada, ¡trampa!");
	   return 0; 
	}
	//check if the valor is valid
	if(palo !='C' && palo !='D' && palo !='P' && palo !='T'){
	   printf("Carta inventada, ¡trampa!");
	   return 0;
	}
	//  used to check the color of palo 
    switch(palo){
	case 'C':
	case 'D':
	printf("Color: rojo\n");
	break;
	case 'P':
	case 'T':
	printf("Color: negro\n");
	break;
	
	}
	//used to check valor whether it contains the cards or not
	if(valor=='J'|| valor=='Q' || valor=='K'){
		printf("Figura: Si\n");
	}else{
		printf("Figura: No\n");
		
	}
	// used switch to check the valor and its point depending upon the card the user choose
	switch(valor){
		case 'T':
		case 'J':
		case 'Q':
		case 'K':
		printf("Puntos de blackjack: 10.\n");
		break;
		case 'A':
		printf("Puntos de blackjack: 11.\n");
		break;
		case '2':
		printf("Puntos de blackjack: 2.\n");
		break;
		case '3':
		printf("Puntos de blackjack: 3.\n");
		break;
		case '4':
		printf("Puntos de blackjack: 4.\n");
		break;
		case '5':
		printf("Puntos de blackjack: 5.\n");
		break;
		case '6':
		printf("Puntos de blackjack: 6.\n");
		break;
		case '7':
		printf("Puntos de blackjack: 7.\n");
		break;
		case '8':
		printf("Puntos de blackjack: 8.\n");
		break;
		case '9':
		printf("Puntos de blackjack: 9.\n");
		break;
		
		
	}
	
	
	return 0;
	
}