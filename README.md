# 📚 Exercícios de Monitoria — AED 1 | Estruturas de Repetição em C

> **Monitor:** Cauã · **Disciplina:** Algoritmos e Estruturas de Dados 1 (AED 1) · **Instituição:** IF Goiano — Campus Iporá

Repositório com exercícios de programação em **linguagem C** voltados para prática de **estruturas de repetição** (`while` e `for`), seguindo o padrão de submissão do **[CodeBench](https://codebench.icomp.ufam.edu.br/)** — juiz online utilizado na disciplina.

---

## 🗂️ Estrutura do Repositório

```
excMonitoria/
├── README.md
├── .gitignore
│
├── exercicios_while/          ← Exercícios usando somente while
│   ├── rules.md               # Regras e adaptações para o CodeBench (while)
│   ├── LISTA_DE_EXERCICIOS.MD # Enunciados detalhados dos 20 exercícios
│   ├── enunciados.txt         # Enunciados em texto puro (para colar no CodeBench)
│   ├── casos_de_teste.txt     # Casos de teste (entrada + saída esperada)
│   └── exc1.c ... exc20.c    # Soluções dos 20 exercícios
│
└── exercicios_for/            ← Exercícios usando somente for
    ├── rulesFor.md             # Regras e adaptações para o CodeBench (for)
    ├── EXC_FOR.md              # Enunciados detalhados dos 20 exercícios
    ├── enunciados.txt          # Enunciados em texto puro (para colar no CodeBench)
    ├── casos_de_teste.txt      # Casos de teste (entrada + saída esperada)
    └── exc1.c ... exc20.c     # Soluções dos 20 exercícios
```

---

## 📋 O que é o CodeBench?

O **CodeBench** é um juiz online de programação do Instituto de Computação da UFAM. O sistema:

1. Recebe o código do aluno
2. Executa automaticamente em um container Docker Linux
3. Compara a saída gerada com a saída esperada **byte a byte**
4. Retorna **Correto** ou **Errado**

> ⚠️ Qualquer diferença na saída (espaço extra, `\n` faltando, letra maiúscula errada) resulta em **resposta errada**.

---

## 📝 Listas de Exercícios

### 🔁 Lista While (`exercicios_while/`)

20 exercícios resolvidos usando **somente `while`** (sem `for`, sem `do...while`).

| Exercício | Descrição |
|-----------|-----------|
| exc1 | Soma de números até negativo |
| exc2 | Contagem regressiva com validação |
| exc3 | Números pares entre dois valores |
| exc4 | Contagem de idades (menor/maior de 18) |
| exc5 | Vendas acima de R$ 100 |
| exc6 | Maior e menor número digitado |
| exc7 | Soma dos ímpares de 1 a 1000 |
| exc8 | Simulação de senha numérica |
| exc9 | Divisores de um número |
| exc10 | Soma parcial até ultrapassar 100 |
| exc11 | Sistema de votação (3 candidatos) |
| exc12 | Média de valores reais |
| exc13 | Contagem de múltiplos de 3 |
| exc14 | Tabuada de adição |
| exc15 | Menor e maior nota |
| exc16 | Contagem de pares e ímpares |
| exc17 | Divisíveis por 4 em intervalo |
| exc18 | Série harmônica |
| exc19 | Números terminados em 5 |
| exc20 | Números perfeitos entre 1 e 10.000 |

### 🔄 Lista For (`exercicios_for/`)

20 exercícios resolvidos usando **somente `for`** (sem `while`, sem `do...while`).

| Exercício | Descrição |
|-----------|-----------|
| exc1 | Números de 1 a 100 |
| exc2 | Soma de 1 a N |
| exc3 | Pares de 50 a 150 |
| exc4 | Fatorial de N |
| exc5 | 20 primeiros termos de Fibonacci |
| exc6 | Primos até 200 |
| exc7 | Média de M valores reais |
| exc8 | Contagem de pares de 1 a N |
| exc9 | Tabuada de multiplicação 10×10 |
| exc10 | Potência (base^expoente) |
| exc11 | Divisores de N |
| exc12 | Verificar número perfeito |
| exc13 | 15 primeiros múltiplos de 3 |
| exc14 | Tabela Celsius → Fahrenheit |
| exc15 | Múltiplos de 3 ou 5 até 1000 |
| exc16 | Múltiplos de 4 de 1 a 500 |
| exc17 | Soma dos dígitos de N |
| exc18 | Contagem de primos lidos |
| exc19 | Números de 1 a N + média |
| exc20 | N primeiros ímpares + soma |

---

## ⚙️ Regras de Adaptação para o CodeBench

Todos os exercícios seguem estas regras obrigatórias:

| Regra | Descrição |
|-------|-----------|
| ❌ Sem prompts | Nenhum `printf` antes de `scanf` |
| ✅ Formato exato | A saída deve ser idêntica à esperada (byte a byte) |
| ✅ `return 0` | Todo `main` termina com `return 0` |
| ❌ Sem `system("pause")` | Não usar funções dependentes de Windows |
| ❌ Sem `getch()` | Não usar funções interativas de console |

> 📖 Leia o arquivo `rules.md` dentro de cada pasta para regras detalhadas e exemplos.

---

## 🚀 Como Compilar e Testar

```bash
# Compilar um exercício
gcc -Wall excN.c -o excN

# Testar com entrada manual
./excN

# Testar com arquivo de entrada
echo "5" | ./excN
```

---

## 📂 Arquivos de Suporte

Cada pasta contém:

- **`rules.md`** — Regras completas de adaptação para o CodeBench
- **`LISTA_DE_EXERCICIOS.MD` / `EXC_FOR.md`** — Enunciados detalhados com exemplos de entrada/saída
- **`enunciados.txt`** — Enunciados em texto puro para colar direto no CodeBench
- **`casos_de_teste.txt`** — Casos de teste com entrada e saída esperada para validação

---

## 🎓 Contexto

Exercícios desenvolvidos para **monitoria** da disciplina de **Algoritmos e Estruturas de Dados 1 (AED 1)** do curso de Ciência da Computação do **Instituto Federal Goiano (IF Goiano) — Campus Iporá**, ministrados pelo monitor Cauã. O sistema **CodeBench** é utilizado como plataforma de avaliação automatizada.

---

## 📄 Licença

Material educacional de uso livre para fins acadêmicos.
