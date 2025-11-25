# 📂 Projeto - [Teoria de Grafos]

Este repositório contém os arquivos necessários para execução de um programa em **C** que implementa e manipula um grafo, além da documentação do projeto.

---

## 📄 Documentação

Os seguintes arquivos de documentação estão disponíveis:

* **`Relatório.pdf`**: Contém o **relatório completo** e detalhado do projeto.
* **`Slide.pdf`**: Contém os **slides da apresentação** do projeto.

---

## 💻 Arquivos de Execução

Todos os arquivos neste repositório, **exceto** os arquivos de documentação (`.pdf`) e o arquivo de texto base, são essenciais para a compilação e execução do programa.

| Arquivo | Descrição |
| :--- | :--- |
| **`grafo.h`** | Arquivo de cabeçalho contendo a **prototipagem das funções** e a definição da estrutura do grafo. |
| **`grafo.c`** | Contém a **implementação de todas as funções** necessárias para manipular o grafo. |
| **`dicionario.h`** | Arquivo de cabeçalho com a estrutura **`dicionário`** para as matérias. |
| **`dicionario.c`** | Contém a **atribuição e definição** das matérias no dicionário. |
| **`main.c`** | Arquivo principal para a **execução do programa**. |

---

## ▶️ Passos para Execução

Siga os passos abaixo para compilar e rodar o programa em seu ambiente:

### 1. Preparação do Ambiente

1.  **Salve** todos os arquivos necessários em uma mesma pasta.
2.  **Verifique se você possui um compilador C** instalado (ex: **GCC**).
    * Sistemas baseados em Linux geralmente já possuem o **GCC** instalado.
    * Você pode verificar a instalação usando o comando `gcc --version` no prompt ou terminal.
3.  Caso não tenha o GCC, **instale-o** antes de prosseguir.

### 2. Compilação e Execução

1.  **Abra o prompt de comando** (Windows) ou **Terminal** (Linux/macOS).
2.  **Navegue até a pasta** onde os arquivos foram salvos, utilizando o comando `cd`.
    * *Exemplo:* `cd C:\Users\edine\Pastas compartilhadas\Documents\2025.2\Introdução a grafos\Projeto\Codigo`
3.  **Compile o código** e gere o executável usando o **GCC** com o seguinte comando:
    ```bash
    gcc -Wall -Wextra main.c grafo.c dicionario.c -o Main.exe
    ```
    * *Nota: O parâmetro `-o Main.exe` define o nome do arquivo executável gerado.*
4.  **Execute o programa** usando o comando:
    ```bash
    .\Main.exe
    ```

---