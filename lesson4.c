#include <stdio.h>
int main() {
	int num = 0;
	printf("Enter your number ");
	scanf("%d", &num);
	int num2 = 0;
	if(num % 3 == 0 &&  num % 5 == 0 ) {

		printf("YES!!!");

	}else{
		printf("NO!!!");
	     }
}
