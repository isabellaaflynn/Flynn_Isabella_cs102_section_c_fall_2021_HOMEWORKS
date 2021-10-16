#include <stdio.h>

int main() {
	float a;
	int b;
	char c;
	printf("Input a decimal, integer, and character, respectively: \n");
	scanf("%f",&a);
	scanf("%d",&b);
	scanf("%s",c);
	printf("Decimal: %d Integer: %f Character: %s\n",a,b,c);

	return (0);
}
