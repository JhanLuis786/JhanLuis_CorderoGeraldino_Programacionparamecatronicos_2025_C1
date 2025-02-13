#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Funciones de calculo
float Suma(float a, float b);
float Resta(float a, float b);
float Multiplicacion(float a, float b);
float Division(float a, float b);
float Raizcuadrada(float a);
float Elevacion(float a);

int main()
{
    int opcion;
    float num1,num2,resultado;

    do{
        //Calculos disponibles
        printf("\nCalculadora\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multicplicion\n");
        printf("4. Division\n");
        printf("5. Raiz cuadrada\n");
        printf("6. Elevacion\n");
        printf("0. Salir\n");
        printf("Calculo a realizar: ");
        scanf("%d", &opcion);

        switch (opcion){
    case 1:
        printf("Ingrese dos numeros: ");
        scanf("%f %f", &num1, &num2);
        resultado = Suma(num1, num2);
        printf("Resultado: %.2f\n", resultado);
        break;
        case 2:
        printf("Ingrese dos numeros: ");
        scanf("%f %f",  &num1, &num2);
        resultado = Resta(num1, num2);
        printf("Resultado: %.2f\n", resultado);
        break;
        case 3:
        printf("Ingrese dos numeros: ");
        scanf("%f %f", &num1, &num2);
        resultado = Multiplicacion(num1, num2);
        printf("Resultado: %.2f\n", resultado);
        break;
        case 4:
        printf("Ingrese dos numeros: ");
        scanf("%f %f", &num1, &num2);
        resultado = Division(num1, num2);
        printf("Resultado: %.2f\n", resultado);
        if (num2 != 0) {
        resultado = Division(num1, num2);
            }else {
            printf("Error: Division por cero no permitida.\n");
            }
            break;
        case 5:
            printf("Ingrese un numero: ");
            scanf("%f", &num1);
            if (num1 >= 0) {
                resultado = Raizcuadrada(num1);
                printf("Resultado: %.2f\n", resultado);
            } else {
            printf("Error: No se puede calcular la raiz cuadrada de un numero negativo.\n");
            }
            break;
        case 6:
            printf("Ingrese un numero: ");
            scanf("%f", &num1);
            resultado = Elevacion(num1);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 0:
            printf("Salir de la calculadora...\n");
            break;
        default:
            printf("Opcion no valida. Intente de nuevo.\n");
        }
    } while (opcion != 0);

    return 0;
}
//Funciones
float Suma(float a, float b){
return a + b;
}
float Resta(float a, float b){
return a - b;
}
float Multiplicacion(float a, float b){return a * b;
}
float Division(float a, float b){
return a / b;
}
float Raizcuadrada(float a){
return sqrt(a);
}
float Elevacion(float a){
return a * a;
}
