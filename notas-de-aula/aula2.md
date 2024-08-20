# Aula 2 - Revisão de C - Parte 2
##### Biblioteca string.h (continuação)
strcpy(para, de) -> Copia o valor de uma string
strtod(`const char *toConvert, char **endPtr`) -> conversão de string para double
strtoi(`*str, **endPtr, int base`) -> Converte uma string para unsigned long int
sprintf() -> Escreve um valor em uma string e não no terminal
sscanf() -> Recebe os valores de uma string e armazena em outra variável

### Expressões
Operadores Unários: 
	+ (mais unário) 
	- (menos unário) 
	- ! (NOT unário) 
	- & (AND unário)  
	* (conteúdo) 
	++ (Incremento) 
	-- (Decremento)
Operadores relacionais:
	> Maior que
	< Menor que
	>= Maior ou igual
	<= Menor ou igual
	== Igual a
	!= Diferente
Operadores Lógicos
	&& AND
	|| OR
	! NOT
Seguem as regras da álgebra
Precedência: ()
Retornam um valor

### Comandos de seleção

##### if
```c
if (expressão) sentença1;
else sentença2;
```
se != 0 -> Executa a sentença 1;
senão executa sentença 2
ifs podem ser aninhados em até 15 níveis
o else sempre se relaciona com o if MAIS PRÓXIMO, independente da identação

##### switch
```c 
switch(expressão){
	case 1: sentença1; break;
	case 2: sentença2; break;
	...
	case n: sentençan; break;
	default: default; break;
}
```
verifica a igualdade entre os casos e executa caso igual
caso n tenha o break ele executa o caso real e depois executa os casos abaixo até encontrar um break;

### Comandos de iteração

##### for
for(inicialização, condição, incremento)
```c 
for(int i = 0; i < 10; i++){
	printf("%d\n", i);
}
```

##### while
while(condição)
```c 
while(i){
	sentença1;
}
```

### Funções
tipo nomeDaFunção(parâmetros){declarações}
	Tipo - especifica o tipo de valor que a função deve retornar
		Todos os tipos padrão são aceitos;
		Caso não tenha retorno, o tipo da função é void

##### Passagem por valor
Modo padrão de passagem em C
Os parâmetros são copiados localmente
Uma mudança interna não acarreta mudança externa
```c
void potencia2_valor (int n) { n = n * n}
```

##### Passagem por referência
O endereço é passado na chamada da função
Uma mudança interna acarreta uma mudança externa
```c
void potencia2_ref (int *n) {*n = *n * *n}
```

Passagem de vetores e matrizes é sempre feita por referência
```c
void sort(int num[10])
void sort(int num[])
void sort(int *num)
```