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
- Os exercícios estão descritos no arquivo `EXC_FOR.md` — leia o enunciado com atenção
  antes de implementar.
- **Todos os exercícios desta lista devem ser resolvidos utilizando somente `for`.** Não use `while` nem `do...while`.

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

### ✅ Trate múltiplos casos de teste com `for(;;)` + `scanf` + `break` quando necessário
Muitos exercícios do CodeBench passam várias entradas de uma vez. Use o retorno do `scanf` para
detectar o fim da entrada:

```c
// Leitura de múltiplos casos até EOF
for (;;) {
    if (scanf("%d", &n) == EOF) break;
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

    // lógica do exercício (usando somente for)

    // saída (printf com formato exato do enunciado)

    return 0;
}
```

---

## Arquivos que devem ser gerados

### 1. Arquivos `.c` (código dos exercícios)
- Um arquivo por exercício: `exc1.c`, `exc2.c`, ..., `excN.c`.
- **Sem comentários de enunciado** dentro do código — o código deve ser limpo, direto.
- Sem `printf` de prompt antes de `scanf`.
- Usar somente `for` (sem `while` nem `do...while`).

### 2. Arquivo `enunciados.txt` (enunciados em texto puro)
- Todos os enunciados devem ser escritos em um único arquivo `.txt`, em **texto puro**
  (sem markdown, sem formatação especial).
- Isso permite copiar e colar diretamente no CodeBench sem que a plataforma
  interprete a formatação como código.
- Cada enunciado deve seguir este padrão de 4 partes:

```
Exercício N

Faça um programa que [descrição clara do que o programa deve fazer].
([Regras especiais, casos de borda, mensagens de erro obrigatórias — se houver])
Exemplo de possível execução:
  [entrada]
  [saída esperada]
Utilize somente For.
```

### 3. Arquivo `casos_de_teste.txt` (casos de teste com entrada E saída)
- Deve cobrir **todas as saídas possíveis** de cada exercício:
  - Caso normal (fluxo principal)
  - Casos de erro (entradas inválidas, mensagens de erro)
  - Casos de borda (valores limite, listas vazias, valores exatos no limiar, etc.)
- Cada caso no formato:

```
Caso de Teste #N (descrição breve)
Entrada:
[valores, um por linha]
Saída:
[saída exata do programa]
```

- A saída deve ser **idêntica** ao que o programa imprime — byte a byte.
  Incluir espaços extras, `\n` finais, ou qualquer detalhe que o programa produza.

---

## Formato do Enunciado

Antes de escrever o código de cada exercício, **escreva o enunciado no arquivo `enunciados.txt`**.
Siga sempre este padrão de 4 partes:

```
Faça um programa que [descrição clara do que o programa deve fazer].
([Regras especiais, casos de borda, mensagens de erro obrigatórias — se houver])
Exemplo de possível execução:
  [entrada]
  [saída esperada]
Utilize somente For.
```

### Exemplos de enunciados no padrão correto

**exc1:**
> Faça um programa que some números inteiros digitados pelo usuário até que ele informe um número negativo. Em seguida, exiba o total da soma.
> Exemplo de possível execução:
> `7 5 2 -1` → `Somatório final = 14`
> Utilize somente For.

**exc2:**
> Faça um programa que receba um número inteiro positivo e imprima a contagem regressiva desse valor até 1. Se o usuário digitar um valor negativo ou zero, solicite novamente até que seja um valor adequado.
> (Caso o valor for inválido, printar `"Valor inválido, tente novamente.\n"`)
> Utilize somente For.

**exc3:**
> Faça um programa que exiba todos os números pares entre dois valores inteiros (inicio e fim) informados pelo usuário (considerar que inicio < fim). Pare o programa se, em algum momento, inicio >= fim.
> (Se o usuário informar inicio >= fim, printe `"Erro! inicio >= final."` e encerre o programa imediatamente.)
> Utilize somente For.

---

## Exemplos de Referência

Abaixo os 3 primeiros exercícios já adaptados corretamente para o CodeBench:

**exc1.c**
```c
#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    for (;;) {
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
#include <stdio.h>

int main() {
    int num;

    for (;;) {
        scanf("%d", &num);
        if (num <= 0) {
            printf("Valor inválido, tente novamente.\n");
            continue;
        }
        break;
    }
    for (; num > 1; num--) {
        printf("%d ", num);
    }
    printf("1");
    return 0;
}
```

**exc3.c**
```c
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
    for (; inicioContagem <= fimContagem; inicioContagem += 2) {
        printf("%d ", inicioContagem);
    }
    return 0;
}
```

---

## Checklist antes de submeter

- [ ] O exercício usa somente `for`? (sem `while` nem `do...while`)
- [ ] O arquivo está nomeado corretamente (`excN.c`)?
- [ ] Não há `printf` de prompt antes de `scanf`?
- [ ] O formato da saída bate exatamente com o que o enunciado pede?
- [ ] O `main` retorna `0`?
- [ ] Não há `system("pause")`, `getch()` ou qualquer função dependente de Windows?
- [ ] Não há comentários de enunciado no código?
- [ ] O enunciado está no arquivo `enunciados.txt`?
- [ ] Os casos de teste (entrada + saída) estão no arquivo `casos_de_teste.txt`?
- [ ] Compilou localmente sem warnings com `gcc -Wall excN.c -o excN`?