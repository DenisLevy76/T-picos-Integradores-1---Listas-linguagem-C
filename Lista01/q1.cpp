// Nome: Denis Levy
// Matricula: 04063861
// Turma: BCC-3NMA

#include <iostream>

int main() {
  float valor, desconto, valorFinal;
  printf("Entre com o valor atual: ");
  scanf("%f", &valor);

  if(valor < 90) desconto = 0.1;
  else if (valor > 90 && valor < 150) desconto = 0.15;
  else desconto = 0.25;

  valorFinal = valor * (1 + desconto);

  printf("Desconto de: R$ %.2f\n", desconto * valor);
  printf("Novo valor: R$ %.2f\n", valor - (valor * desconto));
}