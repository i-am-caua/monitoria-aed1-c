# Regras para Resolução de Exercícios — CodeBench (UFAM)

## O que é o CodeBench?

O **CodeBench** é um juiz online de programação desenvolvido pelo Instituto de Computação da
Universidade Federal do Amazonas (IComp/UFAM). Ele funciona assim:

1. O professor cadastra exercícios com **casos de teste** — pares de `<entrada, saída esperada>`.
2. O aluno escreve o código na IDE integrada da plataforma.
3. Ao submeter, o sistema **executa o código automaticamente** dentro de um container Docker Linux
   e **compara a saída gerada com a saída esperada**, byte a byte.
4. O resultado é imediato: **Correto** ou **Errado**.

> ⚠️ Qualquer diferença na saída — espaço a mais, letra maiúscula errada, `\n` faltando — resulta
> em **resposta errada**. O juiz não perdoa.

---

## Regras Gerais

- **Cada exercício deve estar em seu próprio arquivo `.c` separado.**
  Não coloque múltiplos exercícios em um único arquivo.
- **Todos os exercícios devem ser escritos em linguagem C.**
- Os arquivos devem seguir a nomeclatura: `excN.c` (ex: `exc1.c`, `exc2.c`, etc.).
- Os exercícios estão descritos no arquivo `LISTA_DE_EXERCICIOS.md` — leia o enunciado com atenção
  antes de implementar.
- **Todos os exercícios desta lista devem ser resolvidos utilizando somente `while`.** Não use `for` nem `do...while`.

---

## Regras Críticas de Adaptação para o CodeBench

### ❌ NUNCA use mensagens de prompt para o usuário
O CodeBench alimenta a entrada via **stdin automaticamente** (sem humano digitando). Qualquer texto
de prompt que você imprimir vai para o stdout e será comparado com a saída esperada — causando erro.

```c
// ❌ ERRADO — "Digite um número: " vai para o stdout e quebra o teste
printf("Digite um número: ");
scanf("%d", &n);

// ✅ CORRETO — lê direto, sem mensagem
scanf("%d", &n);
```

### ✅ Use apenas `scanf` para entrada e `printf` para saída
Entrada padrão (`stdin`) e saída padrão (`stdout`) são o único canal de comunicação com o juiz.

### ✅ Siga o formato de saída à risca
Se o enunciado diz `"Somatório final = %d"`, imprima exatamente isso — sem ponto final extra,
sem espaço a mais, sem `\n` onde não deve haver (e com `\n` onde deve).

### ✅ Trate múltiplos casos de teste com `while(scanf(...) != EOF)` quando necessário
Muitos exercícios do CodeBench passam várias entradas de uma vez. Use o retorno do `scanf` para
detectar o fim da entrada:

```c
// Leitura de múltiplos casos até EOF
while (scanf("%d", &n) != EOF) {
    // processa n
}
```

### ✅ `return 0` ao final do `main`
Sempre encerre o `main` com `return 0` para indicar execução bem-sucedida. Use `return -1` ou
outros valores só quando o próprio enunciado exigir (ex: validação de erro explícita).

### ✅ Sem `system("pause")` ou `getch()`
Esses recursos são de ambiente Windows/interativo e não funcionam no ambiente Linux do CodeBench.

---

## Estrutura Padrão de um Arquivo `.c` para o CodeBench

```c
#include <stdio.h>
// outros includes necessários

int main() {
    // declaração de variáveis

    // leitura de entrada (scanf — sem printf de prompt antes)

    // lógica do exercício

    // saída (printf com formato exato do enunciado)

    return 0;
}
```

---

## Formato do Enunciado

Antes de escrever o código de cada exercício, **escreva o enunciado** descrevendo o que o programa deve fazer. Siga sempre este padrão de 4 partes:

```
Faça um programa que [descrição clara do que o programa deve fazer].
([Regras especiais, casos de borda, mensagens de erro obrigatórias — se houver])
Exemplo de possível execução:
  [entrada]
  [saída esperada]
Utilize somente While.
```

### Exemplos de enunciados no padrão correto

**exc1:**
> Faça um programa que some números inteiros digitados pelo usuário até que ele informe um número negativo. Em seguida, exiba o total da soma.
> Exemplo de possível execução:
> `7 5 2 -1` → `Somatório final = 14`
> Utilize somente While.

**exc2:**
> Faça um programa que receba um número inteiro positivo e imprima a contagem regressiva desse valor até 1. Se o usuário digitar um valor negativo ou zero, solicite novamente até que seja um valor adequado.
> (Caso o valor for inválido, printar `"Valor inválido, tente novamente.\n"`)
> Utilize somente While.

**exc3:**
> Faça um programa que exiba todos os números pares entre dois valores inteiros (inicio e fim) informados pelo usuário (considerar que inicio < fim). Pare o programa se, em algum momento, inicio >= fim.
> (Se o usuário informar inicio >= fim, printe `"Erro! inicio >= final."` e encerre o programa imediatamente.)
> Utilize somente While.

> 💡 O enunciado serve como documentação do exercício — escreva-o como um comentário no topo do arquivo `.c` ou em um bloco separado antes do código.

---

## Exemplos de Referência

Abaixo os 3 primeiros exercícios já adaptados corretamente para o CodeBench:

**exc1.c**
```c
/*
 * Enunciado: Faça um programa que some números inteiros digitados pelo usuário
 * até que ele informe um número negativo. Em seguida, exiba o total da soma.
 * Exemplo: 7 5 2 -1 → Somatório final = 14
 * Utilize somente While.
 */
#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    while (1) {
        scanf("%d", &num);
        if (num < 0) break;
        sum += num;
    }
    printf("Somatório final = %d", sum);
    return 0;
}
```

**exc2.c**
```c
/*
 * Enunciado: Faça um programa que receba um número inteiro positivo e imprima
 * a contagem regressiva desse valor até 1. Se o usuário digitar um valor
 * negativo ou zero, solicite novamente até que seja um valor adequado.
 * (Caso o valor for inválido, printar "Valor inválido, tente novamente.\n")
 * Utilize somente While.
 */
#include <stdio.h>

int main() {
    int num;

    while (1) {
        scanf("%d", &num);
        if (num <= 0) {
            printf("Valor inválido, tente novamente.\n");
            continue;
        }
        if (num == 1) {
            printf("1");
            break;
        }
        printf("%d ", num);
        num--;
    }
    return 0;
}
```

**exc3.c**
```c
/*
 * Enunciado: Faça um programa que exiba todos os números pares entre dois
 * valores inteiros (inicio e fim) informados pelo usuário (inicio < fim).
 * (Se inicio >= fim, printe "Erro! inicio >= final." e encerre o programa.)
 * Utilize somente While.
 */
#include <stdio.h>

int main() {
    int inicioContagem;
    int fimContagem;
    scanf("%d %d", &inicioContagem, &fimContagem);
    if (inicioContagem >= fimContagem) {
        printf("Erro! inicio >= final.");
        return -1;
    }
    if (inicioContagem % 2 != 0) {
        ++inicioContagem;
    }
    while (inicioContagem <= fimContagem) {
        printf("%d ", inicioContagem);
        inicioContagem += 2;
    }
    return 0;
}
```

---

## Checklist antes de submeter

- [ ] O enunciado está escrito no topo do arquivo como comentário `/* */`?
- [ ] O exercício usa somente `while`? (sem `for` nem `do...while`)
- [ ] O arquivo está nomeado corretamente (`excN.c`)?
- [ ] Não há `printf` de prompt antes de `scanf`?
- [ ] O formato da saída bate exatamente com o que o enunciado pede?
- [ ] O `main` retorna `0`?
- [ ] Não há `system("pause")`, `getch()` ou qualquer função dependente de Windows?
- [ ] Compilou localmente sem warnings com `gcc -Wall excN.c -o excN`?