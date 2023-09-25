#include <stdio.h>
#include <stdlib.h>

void main(){

float x;
float y;
int op;

printf("\n digite o valor de x");
scanf("%f", &x);
printf("\n digite o valor de y");
scanf("%f", &y);
printf("\n qual operacao o senhor deseja:");
printf("\n 1 - soma");
printf("\n 2 - subtracao");
printf("\n 3 - multiplicacao");
printf("\n 4 - divisao");
scanf("%d", &op);
switch(op){
    case 1:
        printf("\n %f + %f = %f", x, y, x + y );
        break;
    case 2:
        printf("\n %f + %f = %f", x, y, x - y );
        break;
    case 3:
        printf("\n %f + %f = %f", x, y, x * y );
        break;
    case 4:
        printf("\n %f + %f = %f", x, y, x / y );
        break;
    defalt:
        printf("\n opcao invalida");
        break;
    }
return 0;


}
