#include <stdio.h>
 
int main() {
 
    double A, B, C, temp;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    if(B > A) {
        temp = B;
        B = A;
        A = temp;
    }
    
    if(C > A) {
        temp = C;
        C = A;
        A = temp;
    }
    
    if(A > 0 && B >0 && C > 0) {
        if(A >= (B + C)) {
            printf("NAO FORMA TRIANGULO\n");
        } else {
            if((A * A) == ((B * B) + (C * C))) {
                printf("TRIANGULO RETANGULO\n");
            }
            if((A * A) > ((B * B) + (C * C))) {
                printf("TRIANGULO OBTUSANGULO\n");
            }
            if((A * A) < ((B * B) + (C * C))) {
                printf("TRIANGULO ACUTANGULO\n");
            }
            if(A == B && A == C && B == C) {
                printf("TRIANGULO EQUILATERO\n");
            } else if(A == B || A == C || B == C) {
                printf("TRIANGULO ISOSCELES\n");
            }
        }
    }
 
    return 0;
}