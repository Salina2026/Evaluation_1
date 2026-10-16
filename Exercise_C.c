/*
Nombre de programa : Ejercicio C
Autor : Salina Shah
Fecha : 11/10/2026 
*/
#include<stdio.h>
int main(void){
	int edad;
	int altura;
	int acompanado;
	int problema_espalda;
	
	//ask user their age
	printf("Edad:");
	scanf("%d", &edad);
	
	//ask user their height
	printf("Altura en cm: ");
	scanf("%d", &altura);
	
	//ask if they are with someone
	printf("¿Acompañado?(1/0):");
	scanf("%d",&acompanado);
	
	//ask if they have back problem
	printf("¿Problemas de espalda?(1/0):");
	scanf("%d",&problema_espalda);
	
	 //make sure that the user dont have back pain , 
	 //have someone and height greater or equal 140cm for rollercoaster
	 if(altura >= 140 && problema_espalda==0 &&(edad >=14 || acompanado==1)){
		 printf("Montaña.Si\n");
	 }else{
		 printf("Montaña.No\n");
		 
	 }
	 //check if user are above 12 years old or have someone for haunted house
	 if(edad >= 12 || acompanado==1){
		 printf("Casa del terror: Si\n");
	 }else{
		 printf("Casa del terror: No\n");
		 
		 
	 }
	 //check if user height between 90 to 190 for   spinning teacups:
	 if(altura >= 90 && altura <=190){
		 printf("Tazas giratorias : Si\n");
	 }else{
		 printf("Tazas giratorias : No\n");
		 
	 }
	 //if user are below 4 or greater or equal to 65 will have free entry
	 if(edad < 4 || edad >=65){
		 printf("Entrada gratis : Si\n");
	 }else{
		 printf("Entrada gratis : No\n");
		 
	 }
	 return 0;
	
	
}