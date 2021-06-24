#include "../include/Hello.h"
#include "../include/Conta.h"

int main(int argc, char *argv[])
{
    Hello hi;
    hi.print();

  Conta MinhaConta;
  Conta *OutraConta;

  MinhaConta.inicializa("Fulano", 10.25);
  MinhaConta.deposita(12.75);
  MinhaConta.consulta();
  MinhaConta.saque(15.00);
  MinhaConta.consulta();

  OutraConta->inicializa("Beltrano", 220.00);
  OutraConta->consulta();


    return 0;
}