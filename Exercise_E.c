/*Nombre del programa:Ejercicio E Domótica con bits 
Autor : Salina Shah
Fecha : 14/10/2026
*/
#include<stdio.h>
//Displays the binary representation of an
//integer using the specified number of bits
void printBinary(int number, int bits) { 
   unsigned int mask = 1 << (bits - 1); 
   for (int i = 0; i < bits; i++) { 
   if (number & mask) 
       printf("1"); 
     else 
      printf ("0"); 
      mask >>= 1; 
    } 
      printf("\n"); 
    } 
int main(void){
	//declared the variable 
	int luz_casa;
	int luz_encendar;
	int luz_apagar;
	int luz_invertir;
	//output from between 0-255
	printf("Estado inicial (0-255):");
	scanf("%d", &luz_casa);
	
	printf("Luz a encendar:");
	scanf("%d", &luz_encendar);
	
	printf("Luz a apagar :");
	scanf("%d", &luz_apagar);
	
	printf("Luz a invertir:");
	scanf("%d", &luz_invertir);
	
	//check if the number of light status is within the range 0-7
	if((luz_encendar <0 || luz_encendar > 7) || (luz_apagar < 0 || luz_apagar > 7)||(luz_invertir < 0 || luz_invertir > 7)){
		printf("El número de luces no es válido\n");
		return 1;// exit with error
	}
	
	printf("Inicial:");
    printBinary(luz_casa, 8);

	
	// | sets the target bit to 1 (turns the light on)
    // << shifts 1 to the correct bit position
	luz_casa |=(1 <<luz_encendar);
	printf("Encender :");
	// I used printBinary for output in binary format 
	//and used 8 to give 8 bits
	printBinary(luz_casa,8);
	
	// &=~ clears the bit (turns the light off)
	luz_casa &=~(1 <<luz_apagar);
	printf("Apagar :");
	printBinary(luz_casa,8);
	
	//^ toggles the light
	luz_casa ^=(1 <<luz_invertir);
	printf("Invertir : ");
    printBinary	(luz_casa,8);
	
	//check if luz_casa is set to 1 bit
	if(luz_casa & (1<<3)){
		printf("Luz del salón : encendida\n ");
		
	}else{
		printf("Luz del salón : apagado\n");
		
	}
	return 0;
  }
  