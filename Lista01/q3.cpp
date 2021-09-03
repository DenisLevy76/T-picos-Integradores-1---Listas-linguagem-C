// Nome: Denis Levy
// Matricula: 04063861
// Turma: BCC-3NMA

#include <iostream>

int main() {
  float valor;

  printf("Valor da compra: ");
  scanf("%f", &valor);

  int joao = valor / 3;
  int rodrigo = valor / 3;
  int ricardo = valor;
  valor -= ricardo;

  printf("João: R$ %i\n", joao);
  printf("rodrigo: R$ %i\n", rodrigo);
  printf("ricardo: R$ %.2f\n", ricardo / 3 + valor);
}
