# Documentação do Projeto de Criptografia

## 1. Sobre o Projeto

Este projeto foi desenvolvido para a disciplina de **Algoritmo e Pensamento Computacional** e tem como objetivo unir programação em linguagem C, criptografia simples e matemática aplicada.

O programa recebe uma palavra e realiza duas etapas de criptografia. Primeiro, é aplicada uma Cifra de César com um deslocamento fixo de 3 posições. Depois, é utilizada a sequência de Fibonacci para realizar novos deslocamentos nas letras.

Ao final, o programa apresenta a palavra resultante e registra os dados da execução em um arquivo.

## 2. Objetivos

O projeto foi desenvolvido com os seguintes objetivos:

* Praticar a programação em linguagem C;
* Aplicar a Cifra de César;
* Utilizar a sequência de Fibonacci dentro de um algoritmo;
* Relacionar conceitos de matemática com programação;
* Trabalhar com caracteres e strings;
* Utilizar estruturas de repetição e condicionais;
* Integrar diferentes conceitos estudados na disciplina em um único programa.

## 3. Como o Programa Funciona

O programa começa solicitando uma palavra de até 15 letras.

Depois disso, verifica se a palavra foi digitada utilizando somente letras maiúsculas. Caso sejam utilizados outros caracteres, o programa informa o erro e encerra a execução.

Quando a entrada é válida, são realizadas duas etapas de criptografia.

### Primeira etapa — Cifra de César

Na primeira etapa, cada letra recebe um deslocamento fixo de **3 posições** no alfabeto.

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

Cada número da sequência é utilizado para realizar um novo deslocamento.

O deslocamento considerado pelo algoritmo combina o SHIFT escolhido pelo grupo com o valor correspondente da sequência:

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

Assim, o deslocamento varia conforme o programa avança pelas letras da palavra.

## 4. Matemática Aplicada

A principal técnica matemática utilizada no projeto é a **sequência de Fibonacci**.

Nessa sequência, cada número é obtido a partir da soma dos dois números anteriores:

```text
1, 1, 2, 3, 5, 8, 13...
```

No programa, esses valores são utilizados para gerar diferentes deslocamentos durante a segunda etapa da criptografia.

Dessa maneira, a matemática está diretamente relacionada ao funcionamento do algoritmo, em vez de aparecer apenas como uma parte teórica do projeto.

## 5. Escolha da Sequência

O grupo escolheu utilizar a sequência de **Fibonacci** para realizar a segunda camada da criptografia.

A escolha permite que os deslocamentos variem ao longo da palavra, pois os valores da sequência aumentam conforme a posição analisada. Assim, o projeto consegue relacionar diretamente um conceito matemático estudado na disciplina com a lógica do programa.

## 6. Conceitos de Programação Utilizados

Durante o desenvolvimento foram utilizados diferentes conceitos de programação estudados na disciplina, entre eles:

* Variáveis;
* Vetores;
* Strings;
* Estruturas de repetição `for`;
* Estruturas condicionais `if`;
* Operações matemáticas;
* Manipulação de caracteres;
* Biblioteca `string.h`;
* Valores relacionados à tabela ASCII;
* Busca de caracteres utilizando `strchr()`.

Esses conceitos trabalham juntos para receber a palavra, realizar os deslocamentos e gerar o resultado final da criptografia.

## 7. Taxonomia de Bloom

A atividade também foi desenvolvida com base na **Taxonomia de Bloom**. Ao longo do projeto, os conceitos foram inicialmente relembrados e compreendidos, como o funcionamento do alfabeto, da tabela ASCII, da Cifra de César e da sequência de Fibonacci. Em seguida, esses conhecimentos foram aplicados na construção do programa em C.

Durante o desenvolvimento, foi necessário analisar como os valores de Fibonacci alteram os deslocamentos das letras e avaliar os resultados produzidos pelas duas etapas da criptografia. Por fim, a criação do programa reuniu esses conhecimentos em uma única solução, passando pelos níveis de **Lembrar, Compreender, Aplicar, Analisar, Avaliar e Criar**.

## 8. Resultado

Durante a execução, o programa apresenta o resultado das duas etapas:

```text
Cesar: resultado da primeira etapa
Fibonacci + Cesar: resultado final
```

O primeiro resultado mostra a palavra após a aplicação da Cifra de César.

O segundo resultado corresponde à palavra após a aplicação das duas etapas de criptografia.

Além da exibição na tela, as informações da execução são registradas no arquivo `resultado_criptografia.txt`, contendo a palavra original, o SHIFT utilizado, a sequência escolhida e os resultados obtidos.

## 9. Conclusão

O desenvolvimento deste projeto permitiu unir conceitos de **algoritmos, linguagem C, criptografia e matemática aplicada** em um único programa.

A utilização da Cifra de César possibilitou trabalhar com deslocamento de caracteres, enquanto a sequência de Fibonacci foi utilizada para tornar os deslocamentos da segunda etapa variáveis.

O projeto também permitiu colocar em prática conceitos de programação estudados na disciplina, como vetores, strings, estruturas de repetição, estruturas condicionais e manipulação de caracteres.

Dessa forma, a atividade mostrou como conceitos de matemática e programação podem ser combinados para construir uma solução computacional.
