#include <stdio.h>

void main()
{
	float base, altura, area, pi, radio, areaC;

	//Area de un triangulo
	printf("base: ");
	scanf_s("%f", &base);
	printf("altura: ");
	scanf_s("%f", &altura);
	area = (base * altura) /2.0;
	printf("El area de un triangulo de %f x %f es %f\n", base, altura, area);
	
	//Area de un circulo
	pi = 3.1416;
	printf("radio: ");
	scanf_s("%f", &radio);
	areaC = pi * (radio * radio);
	printf("El area de un circulo de %f x %f es %f\n", pi, radio, areaC);
}
