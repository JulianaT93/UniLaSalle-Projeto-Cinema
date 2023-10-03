#include <stdio.h>
int main() {
  // Declaração das variáveis:
  int i, filme_escolhido, quantidade_ingressos, idade[100], retorno_compra;
  float valor_total = 0;
  char *filmes_cartaz[4] = {"Missão Impossível: Acerto de Contas", "Barbie",
                            "Besouro Azul", "Oppenheimer"},
       *resposta_confirmacao[2] = {"Sim", "Não"};

  // Mensagem de boas-vindas:
  printf("Seja bem-vindo(a) ao Cinecultura do Shopping Pátio Paulista! \n");
  printf("\n"); // Código usado para pular linha

  // Mostra os filmes em cartaz:
  do {
    // Faz um loop para exibir o nome do filme com número e hífen antes do
    // título:
    printf("Filmes em cartaz: \n");
    for (i = 0; i < 4; i++) {
      printf("%d - %s\n", i + 1, filmes_cartaz[i]);
    }
    printf("\n");

    // Mensagem e campo para o usuário escolher o número correspondente ao filme
    // que será escolhido:
    printf("Para adquirir ingressos, insira o número correspondente ao filme "
           "desejado: ");
    scanf("%d", &filme_escolhido);
    printf("\n");

    // Valida a resposta do usuário. Se for um número menor que 1 ou maior que
    // 4, retorna uma mensagem de erro:
    if (filme_escolhido < 1 || filme_escolhido > 4) {
      printf("Opção inválida. Insira o número correspondente ao filme "
             "desejado.\n");
      printf("\n");
    }
  } while (
      filme_escolhido < 1 ||
      filme_escolhido >
          4); // Loop/estrutura de repetição para exibir a mensagem de erro, a
              // lista de filmes e o campo para o usuário digitar a opção de
              // filme novamente enquanto o número digitado não for válido.

  // Campo para o usuário digitar a quantidade de ingressos:
  do {
    printf("Quantidade de ingressos: ");
    scanf("%d", &quantidade_ingressos);

    // Valida a opção do usuário. Se for um número maior que 0, retorna a
    // mensagem para digitar a idade dos clientes. Se não, retorna mensagem de
    // erro:
    if (quantidade_ingressos > 0) {
      printf("\n");

      // Campo para usuário digitar a idade dos clientes:
      for (i = 0; i < quantidade_ingressos; i++) {
        printf("Digite a idade do cliente %d: ", i + 1);
        scanf("%d", &idade[i]);
      }
    } else { // Se a quantidade de ingressos não for maior que 0, retorna
             // mensagem de erro:
      printf("\n");
      printf("Opção inválida. Insira a quantidade de ingressos desejada.\n");
      printf("\n");
    }
  } while (quantidade_ingressos <=
           0); // Enquanto a opção escolhida pelo usuário não for válida,
               // repetirá a mensagem de erro e o campo para o usuário digitar a
               // quantidade de ingressos.

  // Verifica a idade dos clientes que está no array/lista idade. Se for menor
  // que 10 ou maior que 65 anos, o valor dos ingressos será R$15,25. Se não, o
  // valor será R$30,50. Após, irá somar os valores e guardar na variável
  // valor_total:
  for (i = 0; i < quantidade_ingressos; i++) {
    float valor_ingresso = 0;

    if (idade[i] < 10 || idade[i] > 65) {
      valor_ingresso = 15.25;
    } else {
      valor_ingresso = 30.50;
    };

    valor_total = valor_total + valor_ingresso;
  };

  // Retorna um resumo com o filme escolhido, quantidade de ingressos e valor
  // total à ser pago:
  printf("\n");
  printf("Resumo da compra de ingressos:\n");
  printf("Filme escolhido: %s\n", filmes_cartaz[filme_escolhido - 1]);
  printf("Quantidade de ingressos: %d\n", quantidade_ingressos);
  printf("O valor total é de R$%.2f\n", valor_total);

  // Verifica se o usuário confirma a compra dos ingressos:
  do {
    printf("\n");
    printf("Confirma a sua compra?\n");

    // Faz um loop para exibir as opções de confirmação ("sim" e "não") com
    // número e hífen antes da string:
    for (i = 0; i < 2; i++) {
      printf("%d - %s\n", i + 1, resposta_confirmacao[i]);
    }

    // Mensagem e campo para o usuário escolher o número correspondente:
    printf("Opção: ");
    scanf("%d", &retorno_compra);

    // Valida a resposta do usuário. Se for um número menor que 1 ou maior que
    // 2, retorna uma mensagem de erro:
    if (retorno_compra < 1 || retorno_compra > 2) {
      printf("Opção inválida. Insira o número 1 para confirmar ou 2 para "
             "cancelar a compra de ingressos.\n");
      printf("\n");
    }
  } while (
      retorno_compra < 1 ||
      retorno_compra >
          2); // // Enquanto a opção escolhida pelo usuário não for válida,
              // repetirá a mensagem de erro e o campo para o usuário digitar o
              // número correspondente para confirmar ou cancelar a compra.

  // Se o retorno do usuário for o número 1, ou seja, "sim", retorna a mensagem
  // de compra confirmada. Se o retorno do usuário for o número 2, ou seja,
  // "não", retorna a mensagem que a compra foi cancelada.
  if (retorno_compra < 2) {
    printf("\n");
    printf("Compra confirmada!\n");
    printf("\n");
    printf("Bom divertimento!\n");
  } else {
    printf("\n");
    printf("Compra cancelada.\n");
  }

  // Fim do código.
  return 0;
}
