#include <stdio.h>


typedef struct {
    float real;
    float imag;
} Complex;

Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

void printComplex(Complex c) {
    if (c.imag >= 0) {
        printf("%.2f + %.2fi\n", c.real, c.imag);
    } else {
        printf("%.2f - %.2fi\n", c.real, -c.imag);
    }
}

int main() {
    Complex c1, c2, sum;

    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum = addComplex(c1, c2);

    printf("Sum of the complex numbers: ");
    printComplex(sum);

    return 0;
}
