#include <stdio.h>

int main() {

	int a = 0;
	printf("enter your number \n");
	scanf("%d", &a);
		int num1 = a / 100;
		int num2 = (a / 10) %10;
		int num3 = a % 10;
		int sum = num1 + num2 + num3;
		while(a <= 999){
	         	printf("your number sum is %d \n", sum);
			return 0;
		}
			printf("OOPS! Enter number by 3 digits \n");
		
}

