#include <stdio.h>
int num;

int main (){
    double n1, n2;
printf("Ingrese el primer numero");
scanf("%lf",&n1);
printf("Ingrese el segundo numero");
scanf("%lf",&n2);
suma(n1,n2);
resta(n1,n2);
multi(n1,n2);
div(n1,n2);

    return(0);
}


void suma (double a, double b){
    double s=a+b;
    printf("El resultado de la suma es,%lf", s);
}
void resta (double a, double b){
    double r = a-b;
    printf("El resultado de la resta es,%lf", r);
}
void multi (double a, double b){
    double m = a*b;
    printf("El resultado de la multiplicacion es,%lf", m);
}
void div (double a, double b){
    double d = a/b;
    printf("El resultado de la division es,%lf", d);
}

