#include <stdio.h>

int main() {
    int num;
    printf("ADD three digit number:  ");
    scanf("%d", &num);

    int digit1 = num / 100; //բաժանում ենք 100 ֊ ի ստանում առաջին թվանշանը
    int digit2 = (num / 10) % 10; //բաժանում ենք 2 անգամ 10 ֊ ի ստանում 2-րդ թվանշանը
    int digit3 = num % 10;//բաժանում ենք 10-ի ստանում 3-րդ թվանշանը

    int sum = digit1 + digit2 + digit3;// գումարում ենք թվանշանները 

    printf("%d\n", sum);

 }
