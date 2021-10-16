#include <stdio.h>

int main() {
	int minute, hour, mins;
	printf("Type an integer for minutes to be converted to hours: ");
	scanf("%d", &minute);
	if(minute >= 60){
		hour = (minute/60);
		mins = (minute -(60*hour));
		printf("%d Minutes = %d Hours and %d Minutes \n",minute,hour,mins);
	}

	else
		printf("%d Minutes = 0 Hours and %d Minutes \n",minute,minute); 

	return 0;

}
