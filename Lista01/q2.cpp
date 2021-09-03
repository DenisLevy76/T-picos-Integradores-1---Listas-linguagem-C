// Nome: Denis Levy
// Matricula: 04063861
// Turma: BCC-3NMA

#include <iostream>

int main() {
  float salarioMinimo = 1100;
  float valorPorVendas = 10;

  float input, valorDasVendas;
  int numeroDeVendas = 0;

  do {
    printf("Entre com o valor da venda: ");
    scanf("%f", &input);
    if(input > 0)  valorDasVendas += input * 0.03;
    numeroDeVendas += 1;
  } while(input > 0);

  printf("Salário final: %f", (salarioMinimo * 3) + valorDasVendas + (valorPorVendas * numeroDeVendas));
}