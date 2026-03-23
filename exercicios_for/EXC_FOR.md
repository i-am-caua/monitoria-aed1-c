# Lista de Exercícios — Estruturas de Repetição (For)

> ⚠️ Leia o arquivo `RULES.md` antes de implementar qualquer exercício.
> Todos os exercícios devem usar **somente `for`**. Sem `while`, sem `do...while`.
> Os exemplos abaixo mostram apenas **entrada → saída** no formato do CodeBench
> (sem mensagens de prompt — elas não existem na execução real).

---

## Exc 1

Imprima todos os números de 1 a 100 na mesma linha, separados por espaço.
Utilize somente For.

**Entrada:** Nenhuma (intervalo fixo).
**Saída:** Números de 1 a 100 separados por espaço.

```
Saída:   1 2 3 4 5 ... 99 100
```

---

## Exc 2

Leia um inteiro `n` e calcule a soma dos inteiros de 1 até `n`.
Utilize somente For.

**Entrada:** Um inteiro `n`.
**Saída:** `A soma dos números inteiros entre 1 e N é: X`

```
Entrada:   5
Saída:     A soma dos números inteiros entre 1 e 5 é: 15
```

---

## Exc 3

Exiba todos os números pares entre 50 e 150 (inclusive).
Utilize somente For.

**Entrada:** Nenhuma (intervalo fixo).
**Saída:** Números pares de 50 a 150 separados por espaço.

```
Saída:   50 52 54 ... 148 150
```

---

## Exc 4

Leia um inteiro `n` (≥ 0) e calcule `n!` (fatorial).
Utilize somente For.

**Entrada:** Um inteiro `n` (≥ 0).
**Saída:** `N! = X`

```
Entrada:   4
Saída:     4! = 24
```

---

## Exc 5

Mostre os 20 primeiros termos da sequência de Fibonacci iniciando em 0 e 1.
Utilize somente For.

**Entrada:** Nenhuma (quantidade fixa: 20 termos).
**Saída:** Os 20 termos separados por espaço.

```
Saída:   0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181
```

---

## Exc 6

Liste todos os números primos menores ou iguais a 200.
Utilize somente For.

**Entrada:** Nenhuma (intervalo fixo: 1 a 200).
**Saída:** Primos separados por espaço.

```
Saída:   2 3 5 7 11 ... 191 193 197 199
```

---

## Exc 7

Leia um valor `m` e em seguida leia `m` números reais. Calcule e exiba a média aritmética com 2 casas decimais.
Utilize somente For.

**Entrada:** Um inteiro `m`, seguido de `m` reais.
**Saída:** `Média dos valores lidos: X.XX`

```
Entrada:   3
           4
           6
           10
Saída:     Média dos valores lidos: 6.67
```

---

## Exc 8

Leia um inteiro `n` e conte quantos números pares existem no intervalo de 1 até `n`.
Utilize somente For.

**Entrada:** Um inteiro `n`.
**Saída:** `Quantidade de pares entre 1 e N: X`

```
Entrada:   9
Saída:     Quantidade de pares entre 1 e 9: 4
```

---

## Exc 9

Exiba a tabuada de multiplicação completa de 1 a 10 em forma de tabela (10 linhas × 10 colunas). Valores separados por espaço, uma linha por vez.
Utilize somente For.

**Entrada:** Nenhuma.
**Saída:** 10 linhas, cada uma com os produtos de 1×i a 10×i separados por espaço.

```
Saída:   1 2 3 4 5 6 7 8 9 10
         2 4 6 8 10 12 14 16 18 20
         3 6 9 12 15 18 21 24 27 30
         ...
         10 20 30 40 50 60 70 80 90 100
```

---

## Exc 10

Leia `base` e `expoente` (inteiros positivos) e calcule `base^expoente` usando apenas multiplicações dentro de um `for` (sem usar `pow()`).
Utilize somente For.

**Entrada:** Dois inteiros: `base` e `expoente`.
**Saída:** `B^E = X`

```
Entrada:   3 4
Saída:     3^4 = 81
```

---

## Exc 11

Leia um número inteiro positivo `n` e imprima todos os seus divisores separados por espaço.
Utilize somente For.

**Entrada:** Um inteiro positivo `n`.
**Saída:** `Divisores de N: d1 d2 d3 ...`

```
Entrada:   12
Saída:     Divisores de 12: 1 2 3 4 6 12
```

---

## Exc 12

Leia um inteiro positivo `n` e informe se ele é perfeito (a soma de seus divisores próprios, excluindo ele mesmo, é igual a `n`).
Utilize somente For.

**Entrada:** Um inteiro positivo `n`.
**Saída:** `N é perfeito.` ou `N não é perfeito.`

```
Entrada:   28
Saída:     28 é perfeito.

Entrada:   10
Saída:     10 não é perfeito.
```

---

## Exc 13

Imprima os 15 primeiros múltiplos de 3, separados por espaço.
Utilize somente For.

**Entrada:** Nenhuma (quantidade fixa: 15 termos).
**Saída:** Os 15 múltiplos separados por espaço.

```
Saída:   3 6 9 12 15 18 21 24 27 30 33 36 39 42 45
```

---

## Exc 14

Exiba uma tabela de conversão de 0 °C a 100 °C para Fahrenheit, de 10 em 10 graus. Fórmula: `F = C * 9/5 + 32`.
Utilize somente For.

**Entrada:** Nenhuma (intervalo fixo: 0 a 100, passo 10).
**Saída:** Uma linha por temperatura no formato `X °C = Y.Y °F`.

```
Saída:   0 °C = 32.0 °F
         10 °C = 50.0 °F
         ...
         100 °C = 212.0 °F
```

---

## Exc 15

Conte quantos números entre 1 e 1000 são múltiplos de 3 ou de 5.
Utilize somente For.

**Entrada:** Nenhuma (intervalo fixo: 1 a 1000).
**Saída:** `Números entre 1 e 1000 que são múltiplos de 3 ou 5 = X`

```
Saída:   Números entre 1 e 1000 que são múltiplos de 3 ou 5 = 467
```

---

## Exc 16

Liste todos os múltiplos de 4 no intervalo de 1 a 500, separados por espaço.
Utilize somente For.

**Entrada:** Nenhuma (intervalo fixo: 1 a 500).
**Saída:** Múltiplos de 4 separados por espaço.

```
Saída:   4 8 12 ... 496 500
```

---

## Exc 17

Leia um inteiro positivo `n` e calcule a soma de seus dígitos.
Utilize somente For.

**Entrada:** Um inteiro positivo `n`.
**Saída:** `Soma dos dígitos de N: X`

```
Entrada:   572
Saída:     Soma dos dígitos de 572: 14
```

---

## Exc 18

Leia um valor `n` e em seguida leia `n` inteiros. Informe quantos deles são primos.
Utilize somente For.

**Entrada:** Um inteiro `n`, seguido de `n` inteiros.
**Saída:** `Números primos lidos: X`

```
Entrada:   5
           2 4 5 9 11
Saída:     Números primos lidos: 3
```

---

## Exc 19

Leia um inteiro `n` (≥ 1), imprima os números de 1 a `n` separados por espaço e calcule a média aritmética com 2 casas decimais.
Utilize somente For.

**Entrada:** Um inteiro `n`.
**Saída:** Os números de 1 a `n` separados por espaço, depois `Média = X.XX`

```
Entrada:   4
Saída:     1 2 3 4
           Média = 2.50
```

---

## Exc 20

Leia `n` e exiba os `n` primeiros números ímpares, seguido da soma total.
Utilize somente For.

**Entrada:** Um inteiro `n`.
**Saída:** `Os N primeiros números ímpares são:` + números separados por espaço + `Sua soma é: X`

```
Entrada:   10
Saída:     Os 10 primeiros números ímpares são:
           1 3 5 7 9 11 13 15 17 19
           Sua soma é: 100
```