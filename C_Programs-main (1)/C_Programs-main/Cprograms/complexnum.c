#include <stdio.h>

typedef struct {
    int real;
    int img;
} Complex;

Complex add(Complex x, Complex y) {
    return (Complex){x.real + y.real, x.img + y.img};
}

int main() {
    Complex a = {2, 3}, b = {4, 5}, sum;
    
    printf("a = %d + %di\n", a.real, a.img);
    printf("b = %d + %di\n", b.real, b.img);
    sum = add(a, b);
    printf("sum = %d + %di\n", sum.real, sum.img);

    return 0;
}
