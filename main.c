#include <stdio.h>

int main(void) {
  int n;
  float salario;
  printf("digite um codigo do seu cargo: ");
  scanf("%d",&n);
  printf("Informe seu salario atual: ");
  scanf("%f",&salario);

  char cargo[50];
  float percentual;
  
  switch(n){

    case 1:
    cargo[50]="Escriturario";
    percentual=salario*0.5;
    salario=salario+percentual;
    printf("Cargo: %s\nPercentual: %.2f\nNovo salario: %.2f",cargo,percentual,salario);
    break;
    
    case 2:
    cargo[50]="Secretario";
    percentual=salario*0.35;
    salario=salario+percentual;
    printf("Cargo: %s\nPercentual: %.2f\nNovo salario: %.2f",cargo,percentual,salario);
    break;
    
    case 3:
    cargo[50]="Caixa";
    percentual=salario*0.2;
    salario=salario+percentual;
    printf("Cargo: %s\nPercentual: %.2f\nNovo salario: %.2f",cargo,percentual,salario);
    break;

    case 4:
    cargo[50]="Gerente";
    percentual=salario*0.1;
    salario=salario+percentual;
    printf("Cargo: %s\nPercentual: %.2f\nNovo salario: %.2f",cargo,percentual,salario);
    break;

    case 5:
    cargo[50]="Diretor";
    salario=salario;
    printf("Cargo: %s\nPercentual: não há aumento\nNovo salario: %.2f",cargo,salario);
    break;

    default:
    printf("Valor de codigo invalido");
  }
  return 0;
}