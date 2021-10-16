#include <stdio.h>

int main() {
	int penny, nickel, dime, quarter, coin;
	printf("Enter a value of US currency in cents: \n");
	scanf("%d", &coin);

	quarter = coin/25;
	dime = (coin - quarter*25)/10;
	nickel = (coin - quarter*25-dime*10)/5;
	penny = coin - quarter*25 - dime*10 -nickel*5;

	printf("Quarters: %d, Dimes: %d, Nickels: %d, Pennies: %d\n", quarter,dime,nickel,penny);
	return(0);

}
