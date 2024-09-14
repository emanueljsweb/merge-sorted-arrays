# Junção de Dois Arrays Ordenados
Este é um programa na linguagem C que exemplifica como podemos realizar a junção de duas listas já ordenadas em uma única lista, mantendo a ordenação.

## Descrição
O programa realiza a criação de duas listas aleatórias de alunos, ordena elas utilizando o método Quick Sort. Após criá-las, realiza a execução do algoritmo principal, juntando os dois arrays ordenados.

Além disso, um menu de opções foi criado para permitir a visualização de resultados e a busca de elementos dentro do novo array.

## Passo a Passo do Algoritmo
1. Comparação entre o primeiro elemento de cada lista, vendo qual o menor entre eles;
2. Insere o maior na lista mesclada e incrementa as variáveis auxiliares correspondentes;
3. Repete o processo até que uma das listas esteja vazia, isto é, o índice maior que seu tamanho - 1;
4. Copia os elementos restantes da lista não vazia para a nova.

## Pré-requisitos
- GCC - (GNU Compiler Collection);
- Linux

## Como executar localmente?
1. Compile o programa utilizando o comando: `gcc -o main main.c`, onde `main` será o arquivo executável de saída e `main.c` é o arquivo que está sendo compilado;
2. Execute o programa pelo terminal, usando o comando `./main` no diretório em que o executável foi criado.

## Autores
- Caio Cassimiro
- Emanuel José
- Eric Eller
- Érico Amorim
- Michela Salvarez