#include <stdio.h>

int main() {
	printf("Insert a height and width value: \n");
	int height, width, Perimeter;
	scanf("%d",&height);
	scanf("%d",&width);
	Perimeter = 2*height + 2*width;
	printf("The Perimeter is %d\n",Perimeter);

	return(0);
}
