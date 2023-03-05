#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

float resultado, resultado2;

void operacao(float n1, float n2, char op) {
    setlocale(LC_ALL,"Portuguese");
    switch (op) {
        case '+':
            resultado = n1 + n2;
            printf("%.2f", resultado);
            break;
        case '-':
            resultado = n1 - n2;
            printf("%.2f \n", resultado);
            break;
        case '*':
            resultado = n1 * n2;
            printf("%.2f \n", resultado);
            break;
        case '/':
            resultado = n1 / n2;
            printf("%.2f \n", resultado);
            break;
        case '#':
            resultado = pow(n1,2);
            resultado2 = pow(n2,2);
            printf("%.2f \n", resultado);
            printf("%.2f \n", resultado2);
            break;
        case '@':
            resultado = pow(n1,3);
            resultado2 = pow(n2,3);
            printf("%.2f \n", resultado);
            printf("%.2f \n", resultado2);
            break;
        case '&':
            resultado = pow(n1,4);
            resultado2 = pow(n2,4);
            printf("%.2f \n", resultado);
            printf("%.2f \n", resultado2);
            break;
        case '$':
            resultado = sqrt(n1);
            resultado2 = sqrt(n2);
            printf("%.2f \n", resultado);
            printf("%.2f \n", resultado2);
            break;
        case '%':
            resultado = pow(n1,2) + pow(n2,3);
            printf("%.2f \n", resultado);
            break;
        default:
            printf("Operação inválida, digite novamente.\n");
            break;
    }
}
int main(){
    for(int i=0;i<4;i++){
        setlocale(LC_ALL,"Portuguese");
        float n1, n2;
        char op;
        printf(" + | Soma \n - | Subtração \n * | Multiplicação \n / | Divisão \n # | Quadrado \n @ | Cubo \n & | Quarta \n $ | Raiz \n %% | x^2 + y^3 \n \n");
        printf("Digite o primeiro número: ");
        scanf("%f", &n1);
        printf("Digite o segundo número: ");
        scanf("%f", &n2);
        printf("Qual a operação? ");
        scanf(" %c", &op);
        operacao(n1, n2, op);
        system("\n pause");
        system("cls");
 }
}

