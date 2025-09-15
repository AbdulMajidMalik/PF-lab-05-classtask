#include<stdio.h>
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d", &a);  // Corrected this line
    (a % 2 == 0) ? printf("divide by 2\n even\n") : ((a % 3 == 0) ? printf("divide by 3\n") : printf("odd not divisible by 3\n"));
    return 0;
}
