#include <stdio.h>
int main() {
	int num = 0;
	printf("Enter your number ");
	scanf("%d", &num);
	if(num % 2 == 0){
		printf("your number %d is Even \n", num);
	}else{
		printf("yor number %d is Odd \n", num);
	}
}
