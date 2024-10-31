# Relatórios de Laboratório - Engenharia Eletrônica - IFSP

Esse repositório tem como objetivo armazenar as resoluções das listas de exercícios passadas em aula ou disponibilizadas no Moodle. Criei não somente para ter um lugar para guardá-los, mas para também compartilhar com outros alunos que possam estar com dificuldades em resolver os exercícios.

## Estrutura do projeto:
```
├── LICENSE
├── README.md
├── provay
└── resolucao-lista-X
```

- **/provaY**: pastas que abriga as eventuais avaliações
    - **n.c** : arquivo com a resolução da questão `n` da prova `Y`.
- **/resolucao-lista-X**:  pastas que contém as listas e minhas resoluções de cada exercício passado em aula ou Moodle.
    - **z.c** : arquivo com a resolução do exercício `z` da lista `X`.

## Como baixar e utilizar esse repositório.
### Baixar
- Clone o Repositório:
```shell
git clone https://github.com/Garamogui/spoaprg-listas.git
```
- ou Baixe o Arquivo ZIP:

### Utilizar
- Abra o arquivo `.pdf` da lista que deseja resolver.
- Abra o arquivo `z.c` que corresponde ao exercício `z` da lista em questão. Se não existir, você pode criar um novo arquivo e começar a resolver o exercício.

- Se você preferir utilizar o terminal, você pode compilar o arquivo `.c` com o seguinte comando:
```shell
gcc -o z z.c
```
Esse comando irá compilar o arquivo `z.c` e gerar um arquivo executável chamado `z`. Para executá-lo, basta digitar:
```shell
./z.exe # no Windows
./a.out # no Linux
```

## Contribuições
Contribuições são bem-vindas! Se você deseja adicionar novos exercícios ou melhorar os existentes, sinta-se à vontade para abrir um pull request. Por favor, siga as diretrizes de formatação e estrutura já estabelecidas.

## Licença
Este repositório está licenciado sob a GPL. Consulte o arquivo LICENSE para mais detalhes.
