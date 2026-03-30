# Lista de Exercícios — Vetores

> ⚠️ Leia o arquivo `RULES.md` antes de implementar qualquer exercício.
> Todos os exercícios devem ser escritos em C, usando vetores (arrays).
> Os exemplos abaixo mostram apenas **entrada → saída** no formato do CodeBench
> (sem mensagens de prompt — elas não existem na execução real).

---

## Exc 1

Leia 5 números inteiros e armazene-os em um vetor A. Em seguida, copie todos os elementos de A para um vetor B. Ao final, imprima os elementos do vetor B separados por espaço.

**Entrada:** 5 inteiros na mesma linha.
**Saída:** Os 5 inteiros copiados, separados por espaço.

```
Entrada:   1 3 5 7 9
Saída:     1 3 5 7 9
```

---

## Exc 2

Leia 8 números inteiros e armazene-os em um vetor A. Preencha um vetor B de tamanho 8 onde cada posição contém o dobro do valor correspondente em A. Ao final, imprima os elementos do vetor B separados por espaço.

**Entrada:** 8 inteiros na mesma linha.
**Saída:** 8 inteiros (cada um = dobro do correspondente em A), separados por espaço.

```
Entrada:   1 3 5 7 2 4 6 8
Saída:     2 6 10 14 4 8 12 16
```

---

## Exc 3

Leia 10 números inteiros e armazene-os em um vetor A. Construa um vetor B de mesmo tamanho com os elementos de A em ordem inversa (A[0] → B[9], A[1] → B[8], ...). Ao final, imprima os elementos do vetor B separados por espaço.

**Entrada:** 10 inteiros na mesma linha.
**Saída:** Os 10 inteiros em ordem inversa, separados por espaço.

```
Entrada:   1 2 3 4 5 6 7 8 9 10
Saída:     10 9 8 7 6 5 4 3 2 1
```

---

## Exc 4

Leia 10 números inteiros e armazene-os em um vetor. Usando um vetor auxiliar, reorganize os elementos de modo que os **pares venham primeiro** (na ordem original em que foram lidos) e os **ímpares por último** (também na ordem original). Ao final, imprima o vetor resultante separado por espaço.

**Regra importante:** a ordem relativa dos pares entre si deve ser preservada, assim como a dos ímpares entre si.

**Entrada:** 10 inteiros na mesma linha.
**Saída:** Pares (ordem original) seguidos de ímpares (ordem original), separados por espaço.

```
Entrada:   7 2 5 8 1 4 9 6 3 10
Saída:     2 8 4 6 10 7 5 1 9 3
```

---

## Exc 5

Leia 10 números inteiros, armazene-os em um vetor A e ordene seus elementos em **ordem crescente** usando estruturas de repetição encadeadas. Ao final, imprima o vetor ordenado separado por espaço.

**Dica:** Implemente o algoritmo **Bubble Sort**.

**Entrada:** 10 inteiros na mesma linha.
**Saída:** Os 10 inteiros em ordem crescente, separados por espaço.

```
Entrada:   9 4 7 1 3 8 2 6 5 0
Saída:     0 1 2 3 4 5 6 7 8 9
```

---

## Exc 6

Leia 10 números inteiros e armazene-os em um vetor. Determine e imprima o **índice** do maior elemento, o **índice** do menor elemento e a **média** dos valores com 2 casas decimais.

**Atenção:** índices em C começam em 0.

**Entrada:** 10 inteiros na mesma linha.
**Saída:**
```
Indice do maior elemento: X
Indice do menor elemento: Y
Media: Z.ZZ
```

```
Entrada:   5 8 2 9 4 7 1 6 3 0
Saída:     Indice do maior elemento: 3
           Indice do menor elemento: 9
           Media: 4.50
```

---

## Exc 7

Leia dois vetores de inteiros, cada um com 5 posições (cada vetor em uma linha). Construa um terceiro vetor de 10 posições com a concatenação dos dois (todos os elementos do primeiro seguidos pelos do segundo). Ao final, imprima o terceiro vetor separado por espaço.

**Entrada:** 5 inteiros (1ª linha) + 5 inteiros (2ª linha).
**Saída:** Os 10 inteiros concatenados, separados por espaço.

```
Entrada:   1 2 3 4 5
           6 7 8 9 10
Saída:     1 2 3 4 5 6 7 8 9 10
```

---

## Exc 8

Leia dois vetores de inteiros, cada um com 5 posições (cada vetor em uma linha). Calcule e imprima o **produto escalar** entre os dois vetores.

O produto escalar é: `A[0]*B[0] + A[1]*B[1] + A[2]*B[2] + A[3]*B[3] + A[4]*B[4]`

**Entrada:** 5 inteiros (1ª linha) + 5 inteiros (2ª linha).
**Saída:** `Produto escalar: X`

```
Entrada:   1 2 3 4 5
           5 4 3 2 1
Saída:     Produto escalar: 35
```

---

## Exc 9

Leia dois vetores de inteiros, cada um com 10 posições (cada vetor em uma linha). Identifique e imprima os **elementos comuns** entre os dois vetores (valores que aparecem em ambos). Cada elemento comum deve ser exibido **apenas uma vez**, mesmo que apareça repetido. Imprima na ordem em que os comuns aparecem no primeiro vetor.

**Entrada:** 10 inteiros (1ª linha) + 10 inteiros (2ª linha).
**Saída:** Elementos comuns separados por espaço.

```
Entrada:   1 2 3 4 5 6 7 8 9 10
           5 7 11 2 13 1 20 8 30 40
Saída:     1 2 5 7 8
```

---

## Exc 10

Leia dois vetores de inteiros, cada um com 10 posições (cada vetor em uma linha). Identifique e imprima os **elementos únicos** entre os dois vetores (valores que aparecem em apenas um dos vetores — presente no primeiro mas não no segundo, ou no segundo mas não no primeiro). Cada elemento deve ser exibido **apenas uma vez**. Imprima primeiro os únicos do vetor A, depois os únicos do vetor B, ambos na ordem original.

**Entrada:** 10 inteiros (1ª linha) + 10 inteiros (2ª linha).
**Saída:** Elementos únicos separados por espaço.

```
Entrada:   1 2 3 4 5 6 7 8 9 10
           5 7 11 2 13 1 20 8 30 40
Saída:     3 4 6 9 10 11 13 20 30 40
```