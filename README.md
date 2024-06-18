# Ponteiros em c 

Este repositório contém uma pequena coleção de scripts em C que focam na manipulação de ponteiros,
oferecendo um tutorial básico e servindo como uma porta de entrada ideal para quem deseja entender e dominar o uso de ponteiros na linguagem C.
Cada script é elaborado com a intenção de demonstrar conceitos fundamentais de ponteiros de maneira clara e didática, 
facilitando o aprendizado para iniciantes e fornecendo uma base sólida para o desenvolvimento de habilidades mais avançadas.


## aluno.c
O programa começa perguntando ao usuário quantos alunos estão na turma.
Em seguida, coleta informações sobre cada aluno e armazena-as em um array dinâmico. 
Depois, identifica e imprime os dados dos alunos com as maiores e menores notas.
Por fim, libera a memória alocada para evitar vazamentos de memória.

### Definição da Estrutura 

- nome
- matricula
- nota 

### Funçoes

- ficha
Esta função aloca dinamicamente memória para um array de Aluno, de acordo com o número n fornecido. 
Ela coleta informações dos alunos via entrada do usuário e retorna um ponteiro para o array de alunos.

- maior_menor
Esta função identifica e imprime os dados dos alunos com as maiores e menores notas na turma. 
Ela percorre o array de alunos para comparar as notas e determina os índices dos alunos com a maior e menor nota.

- turma
Esta função solicita ao usuário o número de alunos na turma e retorna esse valor.

-main
A função principal do programa. Ela chama a função turma para determinar o número de alunos, aloca memória para os alunos com ficha, 
identifica os alunos com as maiores e menores notas com maior_menor e, finalmente, libera a memória alocada.


## negativos.c
Este programa solicita ao usuário que informe quantos números deseja verificar, aloca memória para armazenar esses números, lê os números do usuário, conta quantos deles são negativos e imprime essa contagem. 
Finalmente, libera a memória alocada. A função negativos é responsável por ler os números e contar os negativos, enquanto a função main gerencia a interação com o usuário e a alocação/liberação de memória.

### Funçoes

-negativos
Esta função recebe um ponteiro para um vetor de floats e um inteiro N representando o tamanho do vetor. 
A função realiza duas operações principais:
* Primeiro loop lê N números de ponto flutuante do usuário e os armazena no vetor.
* Segundo loop percorre o vetor para contar quantos dos números são negativos, incrementando o contador sempre que encontra um número menor que zero.

-main
* Declara um ponteiro para um vetor de floats e uma variável inteira.
* Solicita ao usuário a quantidade de números que deseja conferir e armazena esse valor em N.
* Aloca dinamicamente memória suficiente para armazenar N floats usando malloc.
* Verifica se a alocação de memória foi bem-sucedida. Se não, imprime uma mensagem de erro e termina o programa.
* Chama a função negativos passando o vetor alocado e o valor N, e imprime a quantidade de números negativos digitados.
* Libera a memória alocada com free para evitar vazamento de memória.


## preenche.c
Este programa gera dois vetores com tamanhos aleatórios, preenche-os com valores aleatórios entre 0 e 19, e calcula e imprime o maior valor, o menor valor e a média dos elementos de cada vetor. 
Ele usa funções específicas para preencher o vetor, encontrar o maior e menor elemento e calcular a média dos elementos. 
A memória alocada dinamicamente é liberada ao final do programa para evitar vazamentos de memória.

### Funçoes

- preenche
Esta função aloca dinamicamente memória para um vetor de inteiros com tamanho n, preenche o vetor com valores aleatórios entre 0 e 19 e retorna o ponteiro para o vetor.

- maiorElemento
Esta função percorre o vetor vet de tamanho n e retorna o maior valor encontrado.

- menorElemento
Esta função percorre o vetor vet de tamanho n e retorna o menor valor encontrado.

- mediaElementos
Esta função calcula a média dos elementos do vetor vet de tamanho n somando todos os valores e dividindo pelo número de elementos.

- main
* Declara dois ponteiros para vetores de inteiros e duas variáveis inteiras.
* Inicializa a semente do gerador de números aleatórios com a hora atual.
* Gera tamanhos aleatórios n e m para os vetores, entre 0 e 9.
* Aloca e preenche os vetores com valores aleatórios chamando a função preenche.
* Imprime o número de elementos, o maior e menor valor, e a média dos elementos para cada vetor.
* Libera a memória alocada para os vetores usando free.

## raizes.c
Este programa lê os coeficientes de uma equação quadrática do usuário, calcula as raízes da equação usando a fórmula de Bhaskara, e informa ao usuário quantas raízes reais a equação possui, além de seus valores. 
A função raizes é responsável por calcular o discriminante e determinar as raízes, enquanto a função main gerencia a entrada e saída de dados.

### Funçoes

-raizes
Esta função calcula as raízes da equação quadrática. Os parâmetros são os coeficientes A, B, e C da equação, e ponteiros para os valores das raízes 
X1 e X2. A função realiza as seguintes operações:
* Calcula o discriminante Δ = B²−4AC.
* Se Δ for menor que 0, não existem raízes reais.
* Se Δ for maior que 0, calcula as duas raízes reais distintas usando a fórmula de Bhaskara.
* Se Δ for igual a 0, calcula a raiz real dupla.
* Retorna o número de raízes reais.

- main
* Declara variáveis para os coeficientes A, B, e C, e para as raízes X1 e X2.
* Solicita ao usuário que insira os valores de A, B, e C.
* Chama a função raizes para calcular as raízes da equação e armazena o número de raízes reais em numero_de_raizes.
* Dependendo do valor de numero_de_raizes, imprime as raízes reais encontradas ou informa que não existem raízes reais.


## execução

Para executar qualquer um dos programas utiliza-se o padrão:

gcc nome_do_script -o nome_do_executavel 
./nome_do_executavel
