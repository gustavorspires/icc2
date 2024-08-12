### Sintaxe
- Conjunto de regras que definem a estrutura da linguagem
### Tipos
- Propriedades dos dados manipulados em um programa
### Declarações
- Partes do programa
### Funções
- Ações executadas pelo programa

### Olá, Mundo em C:
```c
// Importação de bibliotecas
#include <stdio.h>

// Declaração da função principal (main)
int main(void){
	printf("Olá, mundo");
	return 0;
}
```

- Instruções se encerram com ;
- Minusculas e maiusculas se diferenciam
- Palavras reservadas estão sempre em minúsculas
- Inclusão de bibliotecas devem estar acima de todas as declarações
- No início dos blocos declaramos todas as variáveis que vamos usar

### Declaração de variáveis
#### Onde declarar?
	- Dentro de funções
	- Na definição de parâmetros de funções
	- Fora de todas as funções (variáveis globais)
##### Escopo
	- Define onde e quando uma variável pode ser usada em um programa
##### Variável global
	- Tem escopo em todo o programa
```c
#include <stdio.h>
int x = 0;
...
int main(void){
...
}
```
##### Variável local
Tem escopo apenas na função onde foi declarado

#### Identificadores
Nomes usados para fazer referência a variáveis
Tem regras lexico-semânticas específicas

#### Variáveis e constantes
##### Constante
Valor fixo que não pode ser modificado
Utiliza a palavra reservada const para definir

##### Variáveis
São valores atribuídos a um endereço de memória
Podem ser alterados pelo programa

### Tipos básicos de dado
Define a quantidade de memória reservada para uma variável e a interpretação dos bits

#### Tipos
	- char (caractere)
	- int (inteiro)
	- float (real)
	- double (real de precisão dupla)
	- void (sem valor)
Todos os outros tipos são derivados desses tipos

#### Modificadores de Tipos
signed - tipos numéricos (int, float, double) com sinal
	- Exemplo: signed int - 16 bits, -32.768 a 32.767
unsigned - tipos numéricos
short
long

### Vetores (Arrays)
Um vetor é uma coleção de variáveis do mesmo tipo referenciadas por um nome comum
Variável do vetor = elemento do vetor
Os elementos podem ser acessados individualmente por meio de índices

```c
...
int v[100];
v[47] = 73;
```

Vetores ocupam posições contíguas da memória
Um vetor é considerado uma matriz unidimensional
Em C, vetores e ponteiros são assuntos relacionados

##### Inicialização

```c
float f[5] = {0.0, 1.1, 2.2, 3.3, 4,4};
int A[100] = {1};
//apenas a primeira posição recebe 1
int A[100] = {1, 2};
//apenas as posições 0 e 1 recebem valores
int A[]= {2, 3, 4};
//equivale a int A[3] = {2, 3, 4}
```

### Strings
Não existe tipo String em C. Existem vetores de caracteres que terminam com `\0
O próprio compilador em determinados casos coloca um \0
##### Exemplo
```c
#include <stdio.h>

void main(){
	char re[4] = "aim";
	printf("%s", re);
}
```

ou em forma de ponteiro:
```c
#include <stdio.h>

int main(){
	const char *ola = "ola";
	printf(ola);
	return 0;
}
```

Leitura de uma string
scanf() -> não lê espaços em branco
gets() -> lê espaços em branco

##### Alguns comandos da biblioteca string.h
strlen() -> lê o tamanho da string
strcmp() -> compara conteúdo de duas strings
strcpy() -> copia conteúdo da string