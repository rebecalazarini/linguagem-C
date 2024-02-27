#include <stdio.h>
int main(){
	int a, b, c, d, e;
	printf("digite cinco números inteiros:/n");
	scanf("%d %d %d", &a, &b, &d);
	c = a + b;
	e = c * d;
	printf("A soma de a + b = %d", c);
	printf("a multiplicação de c * d = %d", e);
	return 0;
}
