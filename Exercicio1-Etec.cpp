#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

float p1, p2, m1, m2, mex1, mex2, mf;

main()
{
setlocale(LC_ALL, "portuguese");

printf("Digite a nota da prova 1: ");
scanf("%f", &p1);

printf("Digite a nota do exercício 1: ");
scanf("%f", &mex1);
m1=(p1*0,90)+(mex1*0,10);

printf("Digite a nota da prova 2: ");
scanf("%f", &p2);

printf("Digite a nota do exercício 2: ");
scanf("%f", &mex2);
m2=(p2*0,90)+(mex2*0,10);

mf=(m1+(2*m2)/3);

printf("A média 1 é: %.2f\n",m1);
printf("A média 2 é: %.2f\n",m2);
printf("A média final é: %.2f\n",mf);
}
