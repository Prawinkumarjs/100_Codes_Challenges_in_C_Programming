#include <stdio.h>

int main()
{
	int year;
	printf("Enter the year: ");
	scanf("%d", &year);

	if(year%400 == 0) {
		printf("%d is the leap year", year);
	}

	else if(year%4 == 0 && year%4 != 0 ) {
		printf("%d is the leap year", year);
	}
	
	else{
	    printf("%d is the not leap year", year);
	}

	return 0;
}

// method 2

#include <stdio.h>

int main()
{
	int year;
	printf("Enter the year: ");
	scanf("%d", &year);

	if((year%400 == 0) || (year%4 == 0 && year%4 != 0 )) {
		printf("%d is the leap year", year);
	}
	
	else{
	    printf("%d is the not leap year", year);
	}

	return 0;
}
