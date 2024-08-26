# Aula 3 - Revisão de C - Parte 3
### Funções
#### argc e argv
Informações passadas quando o programa é executado via linha de comando
- argc -> número de argumentos passados
- argv -> lista de argumentos passados
	- argv[0] - > nome do programa
	- argv[1] -> primeiro argumento

```C
void main(int argc, char *argv[]){
	if(argc != 2){
		printf("Você esqueceu o segundo argumento");	
	}
	print("Ola %s", argv[1]);
}
```

#### Tipos
Executam um cálculo -> sqrt(), sin(), math.h em geral
Manipulam informações -> devolve sucesso ou falha
Procedimentos -> exit(), return void

retornos não necessariamente precisam ser usados

#### Funções de tipo não inteiro
Definidas normalmente ou a partir de protótipos

##### Protótipo
```c
float sum(int, int);
void main(){...}
floatif(argc != 2){
	
} sum(float a, float b){...}
```

#### Lista de argumentos variável
Admite lista com tamanho e tipos variáveis
```c
printf(char *string, ...);
```
- Utilização de uma macro -> <stdarg.h>
va_start(ap, i) -> estrutura a ser inicializada, argumento antes da elipse (...)


#### Enumeração
Conjunto de constantes
```c 
enum months{JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ};
```
Primeiro valor é 0
Outros valores são incrementados de 1
Um valor pode ser definido a uma das constantes e as outras serão **incrementadas** a partir dela

### Arquivos
Sequência de bytes que é armazenada no disco e não na memória principal
São endereçados sequencialmente
Podem ser criados e lidos arquivos texto e arquivos binários.
#### Arquivos texto
Gravados como caracteres de 8 bits
Escritos da mesma forma como os dados seriam impressos na tela

A escolha de arquivo texto depende da aplicação (por exemplo, uma sequência de 8 inteiros na memória seria armazenada em 32 bits, enquanto em um arquivo texto ela seria gravada em 64 bits).

#### Arquivos binários
Gravados bit a bit
##### Manipulação
`FILE *fd = fopen(arqName, "r")` -> leitura
`FILE *fd = fopen(arqName, "w")` -> escrita
`fclose(fd)` -> fecha o arquivo
`fprintf, fscanf, fputc, fgetc` -> funcionam da mesma forma das funções de leitura e escrita padrão, porém no arquivo.
`fwrite e fread` -> usados para leitura e escrita em arquivos binários

#### Acesso randômico
Utiliza fseek(), indicando arquivo, número de bytes a partir da posição de origem, e a origem.
numbytes pode ser negativo
##### Origem
SEEK_SET (0) -> início do arquivo
SEEK_CUR (1) -> posição atual do arquivo
SEEK_SET (2) -> posição final do arquivo

### Ponteiros genéricos
Pode apontar para todos os tipos de dados existentes ou que serão criados
- `void *ptr`

### Alocação dinâmica

#### malloc
`void malloc(int size)`
Utilizam-se ponteiros para alocar memória dinâmicamente

```c
int nx = 10;
float *x;
x = (float*) malloc(10 * sizeof(float))
```

#### calloc
- inicializa todos os bits com 0
`void calloc(int size_t, int bytes)`
```c
int nx = 10;
float *x;
x = (float*) calloc(sizeof(float), nx);
```

#### realloc
`void realloc(void *ptr, int num)`
ptr - ponteiro para bloco já alocado
num - número de bytes para alocar
```c
int *p = (int *) malloc(10 * sizeof(int));
int *np = (int *) realloc(p, 100 * sizeof(int));
```