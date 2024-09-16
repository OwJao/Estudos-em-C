#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char hexa[64];
	char bin[256];
	
	printf("Digite um numero hexadecimal: \n");
	scanf(" %s", hexa);
	
	int i = 0; // Para percorrer a string hexa
	
	bin[0] = '\0'; // Estava iniciando com um caractere que era lixo de memoria, esse comando eh para limpar antes
	
	do { 
		switch(hexa[i]){
			case '0': strcat(bin, "0000");
			 break;
			
			case '1': strcat(bin, "0001");
			 break;
			
			case '2': strcat(bin, "0010");
			 break;
			
			case '3': strcat(bin, "0011");
			 break;
			
			case '4': strcat(bin, "0100");
			 break;
			
			case '5': strcat(bin, "0101");
			 break;
			
			case '6': strcat(bin, "0110");
			 break;
			
			case '7': strcat(bin, "0111");
			 break;
			
			case '8': strcat(bin, "1000");
			 break;
			
			case '9': strcat(bin, "1001");
			 break;
			
			case 'A': case 'a': strcat(bin, "1010");
			 break;
			
			case 'B': case 'b': strcat(bin, "1011");
			 break;
			
			case 'C': case 'c': strcat(bin, "1100");
			 break;
			
			case 'D': case 'd': strcat(bin, "1101");
			 break;
			
			case 'E': case 'e': strcat(bin, "1110");
			 break;
			
			case 'F': case 'f': strcat(bin, "1111");
			 break;
			
			default: printf("[ERRO] Caractere Invalido!"); exit(1); break;
			
		}
		
		
		i++;
		
		
	} while(hexa[i] != '\0'); // \0 = final de string
	
	printf("A representacao em binario eh: %s", bin);
	
	
	return 0;
}
