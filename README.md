# 🧮 Calculadora Completa em C

> Calculadora de terminal desenvolvida em linguagem C com 6 operações matemáticas, funções modulares e tratamento de erros.

---

## 📌 Sobre o Projeto

Calculadora interativa executada no terminal, construída como exercício prático de **funções**, **estruturas de repetição** e **switch-case** em C. O programa roda em loop contínuo até o usuário escolher sair, com cada operação implementada em sua própria função modular.

---

## 🏗️ Tecnologias Utilizadas

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![GCC](https://img.shields.io/badge/GCC-Compiler-A8B9CC?style=for-the-badge&logo=gnu&logoColor=black)
![VS Code](https://img.shields.io/badge/VS_Code-007ACC?style=for-the-badge&logo=visual-studio-code&logoColor=white)

---

## 📁 Estrutura do Projeto

```
calculadora-completa/
│
├── calculadora.c           # Código fonte principal
├── calculadora.exe         # Executável compilado (Windows)
├── desenho-projeto.txt     # Esboço e planejamento do projeto
└── .gitignore
```

---

## ⚙️ Funcionalidades

| Opção | Operação | Observação |
|---|---|---|
| 1 | ➕ Soma | Dois números float |
| 2 | ➖ Subtração | Dois números float |
| 3 | ✖️ Multiplicação | Dois números float |
| 4 | ➗ Divisão | Valida divisão por zero |
| 5 | 🔢 Potência | Base e expoente float via `pow()` |
| 6 | √ Raiz Quadrada | Valida número negativo via `sqrt()` |
| 7 | 🚪 Sair | Encerra o programa |

---

## 🧠 Estrutura do Código

O programa é organizado em **funções independentes** para cada operação, chamadas a partir de um `switch-case` dentro de um loop `do-while`:

```c
#include <stdio.h>
#include <math.h>

// Cada operação tem sua própria função
float soma(float a, float b) { ... }
float subtracao(float a, float b) { ... }
float multiplicacao(float a, float b) { ... }
float divisao(float a, float b) { ... }     // trata divisão por zero
float potencia(float base, float expoente) { ... }
float raiz(float numero) { ... }            // trata número negativo

int main() {
    int opcao;
    do {
        // exibe menu
        // lê opção com scanf
        switch (opcao) {
            case 1: ... case 7: ...
        }
    } while (opcao != 7);
}
```

**Tratamento de erros implementado:**
- Divisão por zero → exibe mensagem de erro e retorna `0`
- Raiz de número negativo → exibe mensagem e ignora o cálculo

---

## 🖥️ Demonstração

```
=========================
  CALCULADORA COMPLETA
=========================
Escolha uma opcao:
1 - Soma
2 - Subtracao
3 - Multiplicacao
4 - Divisao
5 - Potencia
6 - Raiz Quadrada
7 - Sair
Escolha: _
```

---

## ▶️ Como Compilar e Executar

### 1. Clone o repositório

```bash
git clone https://github.com/Niccassiano/calculadora-completa.git
cd calculadora-completa
```

### 2. Compile com GCC

```bash
gcc calculadora.c -o calculadora -lm
```

> O flag `-lm` é necessário para linkar a biblioteca `math.h` (`pow` e `sqrt`).

### 3. Execute

```bash
# Windows
calculadora.exe

# Linux/Mac
./calculadora
```

---

## 🔗 Links

- 👤 GitHub: [Niccassiano](https://github.com/Niccassiano)
- 📘 Repositório de exercícios de C: [algoritmos-programacao-I](https://github.com/Niccassiano/algoritmos-programacao-I)

---

```python
| Desenvolvido por Nicolle Cassiano 💻🦖
```
