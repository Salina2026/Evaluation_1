/*
Nombre de programa : Ejercicio B- Calculadora de daño
Autor : Salina Shah
Fecha : 11/10/2026 
*/
#include<stdio.h>
int main(void){
	//assigned the value
	float ataque_base;
	char critico;
	int nivel;
	// int golpe;
	float armadura_enemigo;
	float vida_enemigo;
	//Ask for the base attack
	
	printf("Ataque base :");
	scanf("%f", &ataque_base);
	//Ask for level
	printf("Nivel :");
	scanf("%d", &nivel);
	
	//Ask for the base attack yes or no
	printf("Critico(s/n)? :");
	scanf(" %c", &critico);
	
	// ask armor of enemy
	printf("Armadura enemiga :");
	scanf("%f", &armadura_enemigo);
	
	// ask life of enemy
	printf("Vida del enemigo: ");
	scanf("%f", &vida_enemigo);
	
	
  //If the hit is critical, 
  //the base attack is doubled before the damage is calculated.
	 if(critico=='s'|| critico=='S'){
		 ataque_base *=2.0f;
	 }
	 // base damage: attack scaled by level bonus
	 float danio= ataque_base*(1.0f+ nivel *0.05f);
	 
	 // final damage after enemy armor reduction
	float final_danio= danio*100.0f/(100.0f + armadura_enemigo);
	
	 // classify the hit based on final damage
	 if(final_danio < 10.0f){
		 printf("Rasguño.\n");
	 }else if(final_danio >= 10.0f && final_danio <=50.0f){
		 printf("Golpe sólido\n");
	 }else{
		 printf("¡Devastador!\n");
	 }
	 
	 //check if enemy has defeated
	 if(final_danio >= vida_enemigo){
		printf("Enemigo derrotado\n");
	 }else{
		 // enemy survives, show remaining HP
		 float vida_restante=vida_enemigo-final_danio;
		 printf("Al enemigo le quedan %.1f puntos de vida\n", vida_restante);
		 
	 }
	 return 0;
	
	
}