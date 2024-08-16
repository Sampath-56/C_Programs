#include<stdio.h>
int main() {
    int A, B, sum = 0;
    printf("Enter two integers: "); 
    scanf("%d %d", &A, &B);
    sum = A + B;
    printf("Sum: %d", sum);
    return 0;
}