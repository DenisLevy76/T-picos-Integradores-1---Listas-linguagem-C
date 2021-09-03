// Nome: Denis Levy
// Matricula: 04063861
// Turma: BCC-3NMA

#include <iostream>

float saque(float saldo, float valorDeSaque, float chequeEspecial) {
  if ((chequeEspecial + saldo) - valorDeSaque <= 0) {
      printf("Saldo insuficiente.\n");
      return saldo;
  }

  float novoSaldo = saldo - valorDeSaque;

  if (novoSaldo < 0) {
    printf("Você está usando do cheque especial.\n");
    printf("Você usou R$ %.2f do seu cheque especial.\n", chequeEspecial - (chequeEspecial + novoSaldo));

    novoSaldo = 0;

    return novoSaldo;
  }
  return novoSaldo;
}

float deposito(float saldo, float valorDeDeposito) {
  return saldo + valorDeDeposito;
}

int main() {
  float chequeEspecial = 2000;
  float saldo = 0;
  int operacao, numeroDaConta, valor;

  printf("Número da conta: ");
  scanf("%i", &numeroDaConta);

  printf("Saldo da conta: ");
  scanf("%f", &saldo);

  printf("[1] Saque\n");
  printf("[2] Depósito\n");

  printf("Digite o número da operação: ");
  scanf("%d", &operacao);

  switch(operacao){
    case 1:
      printf("Entre com o valor para saque: ");
      scanf("%i", &valor);
      saldo = saque(saldo, valor, chequeEspecial);
      break;
    case 2:
      printf("Entre com o valor para depósito: ");
      scanf("%i", &valor);
      saldo = deposito(saldo, valor);
  }

  printf("Saldo atual: %.2f\n", saldo);
}