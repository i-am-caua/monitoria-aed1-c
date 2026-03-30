---
description: Instruções e regras para atuar atuando como um "Skill" resolvendo listas de Vetores para a plataforma CodeBench
---

# Skill: Resolução de Exercícios de Vetores — CodeBench (UFAM)

## Contexto e Objetivo
Esta diretriz orienta você (IA) a estruturar de forma correta e padronizada os exercícios de linguagem C focados em **Vetores (Arrays)** para a plataforma de submissão automática **CodeBench** da UFAM.
O sistema funciona em containers fechados num modelo de **Teste de Caixa Preta** — onde as saídas do código criado pelo estudante são comparadas byte a byte contra o gabarito.

## ⚠️ Regras Críticas de Adaptação (CodeBench)

1. **Liberdade de Laços, Obrigatoriedade de Vetor:** Sendo uma lista sobre o tema de vetores, a criação, armazenamento e o manuseio dos dados em estruturas C — como `int vet[100]` — é **essencial**. O aluno, e seus códigos modelo, **têm a liberdade** de usar laços de repetição como quiserem (`for`, `while` ou `do...while`) mas sempre interagindo com os seus índices de um vetor.
2. **Entrada "Cega" (NENHUM prompt de usuário):** Como os dados serão transmitidos de arquivo texto pro terminal automaticamente (via stdin sem humano), códigos com `printf("Digite o tamanho do vetor: ")` serão processados como falha ao comparar as saídas. Use o `scanf` de forma seca e direta.
3. **Casamento de Saída Estrito:** O output deve espelhar fielmente a estrutura especificada. Nunca adicione `\n` onde não foi pedido. Espaços ao final causam divergência e apontam "Errado".
4. **Sem Extensões de Windows ou Interrupções:** Não se deve jamais utilizar `#include <conio.h>`, `system("pause")`, ou funções como `getch()` — por travarem no ambiente isolado rodando em Linux sem console.
5. **Main `return 0`:** Exigência padrão da execução com sucesso, finalizando sempre em `return 0;`.

## Entrega Esperada da IA

Ao receber o pedido de realizar uma `LISTA_VETOR.md` inteira, você obrigatoriamente terá que produzir e focar em 3 saídas para a construção do pacote da lista, divididas da seguinte forma de infraestrutura:

### 1. Código Limpo `.c` (`exc1.c`, `exc2.c`...)
Cada exercício deve ficar no próprio arquivo de código fonte (ex: `exc1.c`). O grande diferencial é que esses códigos não devem conter os famosos comentários `/* Enunciado do exercício */` no cabeçalho. O arquivo deverá conter único e puramente o código enxuto que passará nos testes do CodeBench.

### 2. Documento Padrão de Enunciados Texto Puro (`enunciados.txt`)
Gere um documento único juntando todas as descrições dos exercícios e regras especiais em formato de **Texto Simples Padrão (.txt)** (NÃO formatado em Markdown, sem asteriscos, negritos, crases, etc.), que servirá para o professor copiar e registrar no portal da universidade.
- **Formato exigido dentro desse .txt**:
  ```text
  Exercício N

  Faça um programa que [o que o algoritmo com vetor fará].
  ([Opcional: Trativas de erros com o tamanho do vetor ou entradas, saídas se exceder tamanho limite etc])
  Exemplo de possível execução:
    [os números passados na entrada]
    [saídas com texto que deverão ser printadas no terminal]
  (Repare que nesse bloco, restrição de uso ficará em aberto aos laços, mas preso que os dados usem Vetor).
  ```

### 3. Matriz de Casos de Testes (`casos_de_teste.txt`)
Crie minuciosamente casos para avaliar e provar o algoritmo frente a vários comportamentos (normais, vazios, lotados, negativos ou que acionem exceções). A IA deve prever, criar as saídas automáticas e organizar na matriz contendo:
- **Formato exigido dentro desse .txt de Testes**:
  ```text
  ================================================================
  EXERCÍCIO N — Titulo curto
  ================================================================

  Caso de Teste #1 (caso padrão normal)
  Entrada:
  [dados um por vez no scanf ou seguidos na linha]
  Saída:
  [resultado processado do vetor como exigido no exercício]
  ... e assim seguindo do #2, #3 com erros propositais ou bordas.
  ```

## Estrutura Básica de Código Aceito de Refência:
*(Padrão limpo que o CodeBench aguarda de um código submetido focado em Array)*

```c
#include <stdio.h>

int main() {
    int N; // Exemplo lendo "tamanho da lista" para um cenário base.
    
    // Sem printf em cima exigindo. Direto ao Scanf!
    scanf("%d", &N);
    
    if (N <= 0 || N > 100) {  
        printf("Tamanho invalido.\n"); 
        return 0; // aborta com as regras definidas pela questão
    }
    
    int vetor[N];

    // Iterando dados livres para estrutura do código base do estudante
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }
    
    // Após preencher o Vetor, faz a lógica ...
    // ...
    // ... Output Estrito
    
    return 0; // Fecha perfeitamente
    
}
```

**Instruções Finais:** Quando você for atuar e processar essas diretrizes, aja como na construção de um pacote CodeBench (Códidos fonte, casos de testes em `.txt` blindados e as definições textuais dos problemas). Sempre respeite o contexto e garanta 100% de obediência técnica à mecânica desse Juiz Online.
