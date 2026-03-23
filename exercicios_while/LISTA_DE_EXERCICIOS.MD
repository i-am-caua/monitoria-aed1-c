# Lista de Exercícios — Estruturas de Repetição (While)

> ⚠️ Leia o arquivo `RULES.md` antes de implementar qualquer exercício.
> Todos os exercícios devem usar **somente `while`**. Sem `for`, sem `do...while`.
> Os exemplos abaixo mostram apenas **entrada → saída** no formato do CodeBench
> (sem mensagens de prompt — elas não existem na execução real).

---

## Exc 1

Faça um programa que some números inteiros digitados pelo usuário até que ele informe um número negativo. Em seguida, exiba o total da soma.
Utilize somente While.

**Entrada:** Sequência de inteiros, terminada por um número negativo (não contabilizado).
**Saída:** `Somatório final = X`

```
Entrada:   7 5 2 -1
Saída:     Somatório final = 14
```

---

## Exc 2

Faça um programa que receba um número inteiro positivo e imprima a contagem regressiva desse valor até 1. Se o usuário digitar um valor negativo ou zero, solicite novamente até que seja um valor adequado.
(Caso o valor for inválido, printar `"Valor inválido, tente novamente.\n"`)
Utilize somente While.

**Entrada:** Um ou mais inteiros até um positivo válido.
**Saída:** Mensagens de erro para inválidos; contagem regressiva separada por espaço para o válido.

```
Entrada:   0 -3 5
Saída:     Valor inválido, tente novamente.
           Valor inválido, tente novamente.
           5 4 3 2 1
```

---

## Exc 3

Faça um programa que exiba todos os números pares entre dois valores inteiros (inicio e fim) informados pelo usuário (considerar que inicio < fim). Pare o programa se, em algum momento, inicio >= fim.
(Se o usuário informar inicio >= fim, printe `"Erro! inicio >= final."` e encerre o programa imediatamente.)
Utilize somente While.

**Entrada:** Dois inteiros: `inicio` e `fim`.
**Saída:** Números pares no intervalo separados por espaço, ou mensagem de erro.

```
Entrada:   2 10
Saída:     2 4 6 8 10

Entrada:   10 2
Saída:     Erro! inicio >= final.
```

---

## Exc 4

Faça um programa que leia a idade de várias pessoas até que seja digitada a idade 999 (condição de parada, não contabilizada). Ao final, exiba quantas pessoas são menores de idade (idade < 18) e quantas são maiores ou iguais a 18.
Utilize somente While.

**Entrada:** Sequência de inteiros terminada por 999.
**Saída:**
```
Menores de idade: X
Maiores ou iguais a 18: Y
```

```
Entrada:   15 28 17 40 999
Saída:     Menores de idade: 2
           Maiores ou iguais a 18: 2
```

---

## Exc 5

Faça um programa que leia o valor de vendas de diferentes produtos de uma loja. A leitura deve continuar até ser informado um valor igual a 0 (não contabilizado). Em seguida, calcule e exiba quantas vendas ultrapassaram R$ 100,00.
Utilize somente While.

**Entrada:** Sequência de reais terminada por 0.
**Saída:** `Quantidade de vendas acima de 100 reais: X`

```
Entrada:   120 30 250 0
Saída:     Quantidade de vendas acima de 100 reais: 2
```

---

## Exc 6

Faça um programa que receba números inteiros e identifique qual foi o maior e o menor digitados. A leitura deve se repetir até o usuário digitar -1 (não contabilizado).
Utilize somente While.

**Entrada:** Sequência de inteiros terminada por -1.
**Saída:**
```
O maior número digitado foi X.
O menor número digitado foi Y.
```

```
Entrada:   5 10 3 -1
Saída:     O maior número digitado foi 10.
           O menor número digitado foi 3.
```

---

## Exc 7

Faça um programa que calcule e exiba a soma de todos os números ímpares entre 1 e 1000.
Utilize somente While.

**Entrada:** Nenhuma (o intervalo é fixo: 1 a 1000).
**Saída:** `Soma dos ímpares de 1 a 1000 = X`

```
Saída:     Soma dos ímpares de 1 a 1000 = 250000
```

---

## Exc 8

Faça um programa que simule uma senha numérica: enquanto o usuário não digitar a sequência correta (1234), o sistema deve continuar pedindo a senha. Ao acertar, exiba `"Acesso Permitido."`.
(Tentativas erradas devem exibir `"Senha incorreta."`)
Utilize somente While.

**Entrada:** Sequência de inteiros até que 1234 seja digitado.
**Saída:** `"Senha incorreta."` para erros; `"Acesso Permitido."` ao acertar.

```
Entrada:   1111 4321 1234
Saída:     Senha incorreta.
           Senha incorreta.
           Acesso Permitido.
```

---

## Exc 9

Faça um programa que imprima todos os divisores de um número inteiro positivo informado pelo usuário, repetindo a solicitação enquanto o número for inválido (≤ 0).
(Caso inválido, printar `"Número inválido, tente novamente."`)
Utilize somente While.

**Entrada:** Um ou mais inteiros até um positivo válido.
**Saída:** `Divisores de X: d1, d2, d3, ...`

```
Entrada:   10
Saída:     Divisores de 10: 1, 2, 5, 10

Entrada:   -2 12
Saída:     Número inválido, tente novamente.
           Divisores de 12: 1, 2, 3, 4, 6, 12
```

---

## Exc 10

Faça um programa que some números até o resultado ultrapassar 100. A cada leitura, mostre o valor parcial da soma. Quando ultrapassar 100, exiba a soma final e encerre.
Utilize somente While.

**Entrada:** Sequência de inteiros (o loop para automaticamente ao ultrapassar 100).
**Saída:** `Soma parcial = X` a cada iteração; ao final `"Limite ultrapassado! Soma final = Y"`.

```
Entrada:   30 50 25
Saída:     Soma parcial = 30
           Soma parcial = 80
           Soma parcial = 105
           Limite ultrapassado! Soma final = 105
```

---

## Exc 11

Faça um programa que simule a leitura de votos (1, 2 ou 3) para três candidatos. A condição de parada é o valor 0. Ao final, mostre quantos votos cada candidato recebeu e quem foi o vencedor.
Utilize somente While.

**Entrada:** Sequência de inteiros (1, 2 ou 3) terminada por 0.
**Saída:**
```
Candidato 1: X voto(s)
Candidato 2: Y voto(s)
Candidato 3: Z voto(s)
Vencedor = Candidato N.
```

```
Entrada:   2 3 3 1 0
Saída:     Candidato 1: 1 voto
           Candidato 2: 1 voto
           Candidato 3: 2 votos
           Vencedor = Candidato 3.
```

---

## Exc 12

Faça um programa que calcule a média de diversos valores reais informados pelo usuário. A leitura deve encerrar quando o valor -999 for digitado (não contabilizado). Exiba a média com duas casas decimais.
Utilize somente While.

**Entrada:** Sequência de reais terminada por -999.
**Saída:** `Média = X.XX`

```
Entrada:   10.5 7.0 12.3 -999
Saída:     Média = 9.93
```

---

## Exc 13

Faça um programa que conte quantos números digitados pelo usuário são múltiplos de 3, parando somente quando for informado o número 999 (não contabilizado).
Utilize somente While.

**Entrada:** Sequência de inteiros terminada por 999.
**Saída:** `Quantidade de múltiplos de 3 lidos: X`

```
Entrada:   6 10 3 999
Saída:     Quantidade de múltiplos de 3 lidos: 2
```

---

## Exc 14

Faça um programa que gere a tabuada de adição de um número entre 1 e 10 informado pelo usuário. Se o número for inválido, solicite novamente.
(Caso inválido, printar `"Número inválido, tente novamente."`)
Utilize somente While.

**Entrada:** Um ou mais inteiros até um válido (1 a 10).
**Saída:** Cabeçalho `"Tabuada de adição do N:"` seguido de `N + i = resultado` para i de 1 a 10.

```
Entrada:   0 3
Saída:     Número inválido, tente novamente.
           Tabuada de adição do 3:
           3 + 1 = 4
           3 + 2 = 5
           3 + 3 = 6
           3 + 4 = 7
           3 + 5 = 8
           3 + 6 = 9
           3 + 7 = 10
           3 + 8 = 11
           3 + 9 = 12
           3 + 10 = 13
```

---

## Exc 15

Faça um programa que leia notas (0 a 10) de alunos até que seja digitada a nota 11 (condição de parada, não contabilizada). Ao fim, mostre a menor e a maior nota lida.
Utilize somente While.

**Entrada:** Sequência de reais (0–10) terminada por 11.
**Saída:**
```
Maior nota: X
Menor nota: Y
```

```
Entrada:   5 10 7 11
Saída:     Maior nota: 10
           Menor nota: 5
```

---

## Exc 16

Faça um programa que leia inteiros e verifique quantos deles são pares e quantos são ímpares. Pare quando o usuário digitar 999 (não contabilizado).
Utilize somente While.

**Entrada:** Sequência de inteiros terminada por 999.
**Saída:**
```
Pares: X
Ímpares: Y
```

```
Entrada:   2 7 14 999
Saída:     Pares: 2
           Ímpares: 1
```

---

## Exc 17

Faça um programa que liste todos os números entre dois valores, contando e exibindo quantos deles são divisíveis por 4. Continue enquanto o usuário optar por prosseguir.
(Pergunta de continuação: resposta `S` continua, qualquer outra encerra.)
Utilize somente While.

**Entrada:** Dois inteiros por rodada; depois `S` ou `N` para continuar.
**Saída:** Todos os números do intervalo separados por vírgula; depois os divisíveis por 4 e o total.

```
Entrada:   5 16 N
Saída:     Números no intervalo: 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16
           Divisíveis por 4: 8, 12, 16 (total de 3)
```

---

## Exc 18

Faça um programa que calcule a soma da série harmônica: `1/1 + 1/2 + 1/3 + ... + 1/n` para um valor `n` inteiro positivo informado pelo usuário. Ao final, exiba o resultado com 5 casas decimais.
Utilize somente While.

**Entrada:** Um inteiro positivo `n`.
**Saída:** `1/1 + 1/2 + ... + 1/n = X.XXXXX (aprox.)`

```
Entrada:   5
Saída:     1/1 + 1/2 + 1/3 + 1/4 + 1/5 = 2.28333 (aprox.)
```

---

## Exc 19

Faça um programa que receba uma lista de números inteiros (um por vez) e, ao final, exiba quantos deles terminam em 5. O loop termina ao ler 0 (não contabilizado).
Utilize somente While.

**Entrada:** Sequência de inteiros terminada por 0.
**Saída:** `Quantidade de números terminados em 5: X`

```
Entrada:   15 25 13 0
Saída:     Quantidade de números terminados em 5: 2
```

---

## Exc 20

Faça um programa que apresente todos os **números perfeitos** entre 1 e 10.000. Um número é perfeito se a soma de seus divisores próprios (excluindo ele mesmo) for igual ao próprio número.
(Exemplo: 6 = 1 + 2 + 3)
Utilize somente While.

**Entrada:** Nenhuma (intervalo fixo: 1 a 10.000).
**Saída:** `Números perfeitos entre 1 e 10000:` seguido dos números separados por vírgula.

```
Saída:     Números perfeitos entre 1 e 10000:
           6, 28, 496, 8128
```