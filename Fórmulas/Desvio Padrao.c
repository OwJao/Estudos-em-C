#include <stdio.h>
#include <math.h>

int main(){
	float x1, x2, x3, x4, x5, media, desvio_padrao;
	
	printf("Entre com o valor de x1: ");
	scanf("%f", &x1);
	printf("Entre com o valor de x2: ");
	scanf("%f", &x2);
	printf("Entre com o valor de x3: ");
	scanf("%f", &x3);
	printf("Entre com o valor de x4: ");
	scanf("%f", &x4);
	printf("Entre com o valor de x5: ");
	scanf("%f", &x5);
	
	media = (x1+x2+x3+x4+x5)/5;
	
	desvio_padrao = sqrt((pow((x1-media),2)+pow((x2-media),2)+pow((x3-media),2)+pow((x4-media),2)+pow((x5-media),2))/4);
	
	printf("A media eh: %f\n\n", media);
	printf("O desvio padrao eh: %f", desvio_padrao);
	
	
}
