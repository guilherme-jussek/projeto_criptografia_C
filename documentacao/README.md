# Documentação do Projeto de Criptografia

## 1. Sobre o Projeto

Este projeto foi desenvolvido para a disciplina de **Algoritmo e Pensamento Computacional**, com o objetivo de juntar programação em linguagem C, criptografia simples e matemática aplicada.

O programa recebe uma palavra e aplica duas etapas de criptografia:

* **Primeira etapa:** Cifra de César com SHIFT `3`;
* **Segunda etapa:** deslocamento utilizando a sequência de Fibonacci.

O resultado é uma palavra diferente da original, criada a partir dos cálculos realizados pelo programa.

## 2. Objetivos

* Praticar programação em linguagem C;
* Aplicar a Cifra de César;
* Utilizar a sequência de Fibonacci em um algoritmo;
* Relacionar matemática com programação;
* Trabalhar com caracteres e strings;
* Desenvolver um programa unindo diferentes conceitos estudados na disciplina.

## 3. Como o Programa Funciona

O programa começa pedindo uma palavra de até 15 letras.

Depois, verifica se foram utilizadas somente letras maiúsculas.

Em seguida, são realizadas duas etapas.

### Primeira etapa — Cifra de César

A palavra recebe um deslocamento fixo de **3 posições** no alfabeto.

Por exemplo:

```text
A → D
B → E
C → F
```

O valor `3` foi escolhido pelo grupo como o SHIFT utilizado no projeto.

### Segunda etapa — Fibonacci

Depois da Cifra de César, o programa utiliza a sequência de Fibonacci:

```text
1, 1, 2, 3, 5, 8, 13...
```

Cada número da sequência é utilizado para fazer um novo deslocamento nas letras.

O deslocamento utilizado em cada posição é formado por:

```text
SHIFT + Fibonacci
```

Por exemplo:

```text
3 + 1 = 4
3 + 1 = 4
3 + 2 = 5
3 + 3 = 6
```

Assim, o deslocamento muda conforme o programa avança pelas letras da palavra.

## 4. Matemática Aplicada

A principal técnica matemática utilizada no projeto é a **sequência de Fibonacci**.

Na sequência de Fibonacci, cada número é formado pela soma dos dois números anteriores:

```text
1, 1, 2, 3, 5, 8, 13...
```

No programa, essa sequência é utilizada para gerar diferentes deslocamentos para as letras.

Dessa forma, a matemática não fica apenas como parte teórica do projeto. Ela é utilizada diretamente no funcionamento do algoritmo.

## 5. Conceitos de Programação Utilizados

Durante o desenvolvimento foram utilizados conceitos estudados na disciplina, como:

* Variáveis;
* Vetores;
* Strings;
* Estruturas de repetição `for`;
* Estruturas condicionais `if`;
* Operações matemáticas;
* Manipulação de caracteres;
* Funções da biblioteca `string.h`;
* Valores relacionados à tabela ASCII;
* Busca de caracteres com `strchr()`.

Esses conceitos são utilizados juntos para realizar as etapas da criptografia.

## 6. Taxonomia de Bloom

O projeto também está relacionado aos níveis da **Taxonomia de Bloom** apresentados na atividade.

### Lembrar

Relembrar conceitos como alfabeto, valores ASCII, criptografia e sequência de Fibonacci.

### Compreender

Entender como o deslocamento das letras funciona e como a sequência de Fibonacci pode ser utilizada no programa.

### Aplicar

Utilizar esses conhecimentos para desenvolver o programa em linguagem C.

### Analisar

Observar como diferentes valores da sequência alteram o resultado da palavra criptografada.

### Avaliar

Analisar o resultado produzido pelo programa e compreender como as duas etapas modificam a palavra original.

### Criar

Desenvolver um programa que combine criptografia simples, matemática e programação em um único projeto.

## 7. Resultado

O programa apresenta dois resultados:

```text
Cesar: resultado da primeira etapa
Fibonacci + Cesar: resultado final
```

O segundo resultado é a palavra que passou pelas duas etapas de criptografia.

## 8. Conclusão

O projeto permitiu unir conceitos de **algoritmos, linguagem C, criptografia e matemática aplicada**.

A utilização da Cifra de César junto com a sequência de Fibonacci mostrou como conceitos matemáticos podem ser utilizados dentro de um algoritmo para produzir diferentes resultados.

O desenvolvimento também permitiu colocar em prática conceitos de programação estudados na disciplina.
