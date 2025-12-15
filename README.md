Relatório do Trabalho prático
Programação I

Gestão de Viagens/Transportes



Aluno: Rui, 1712161, 
https://github.com/RUIZAO-beit-f, tgei222314@ensiguarda.com

Indice













1. Descrição do Trabalho	3
2. Implementação do Trabalho	3
3. Funcionamento do trabalho	4
Entrada no programa	4
Recolha dos dados	4
Gravação da viagem	4
Repetição ou fim	5
8. Conclusão	5
Bibliografia	5

1. Introdução
O presente trabalho consiste no desenvolvimento de um programa em linguagem C que permite o registo, organização e armazenamento de informações relativas a viagens.
 O sistema foi concebido para recolher dados do cliente, planeamento da viagem, transporte, documentação, execução logística e avaliação final, guardando toda a informação num ficheiro de texto.
Este programa simula um sistema básico de gestão de viagens, podendo ser aplicado em contextos como agências de viagens, planeamento pessoal ou académico.


2. Objetivos do Programa
Os principais objetivos deste programa são:
●	Recolher informações detalhadas sobre uma viagem

●	Organizar os dados de forma estruturada

●	Armazenar os dados num ficheiro externo

●	Permitir o registo de várias viagens consecutivas

●	Garantir uma utilização segura da memória

3. Estrutura do Programa
O programa está dividido em três partes principais:
 1.	Definição de estruturas e constantes

 2.	Funções auxiliares

 3.	Função principal (main)

Definição de Constantes
#define TAM_TEXTO 100
Esta constante define o tamanho máximo para os campos de texto utilizados no programa.
 O uso de uma constante facilita a manutenção e evita valores “mágicos” espalhados pelo código.
Estrutura Viagem
typedef struct {
    char nome[TAM_TEXTO];
    char nif[TAM_TEXTO];
    ...
} Viagem;
A estrutura Viagem é responsável por armazenar toda a informação relacionada com uma viagem.
 Está organizada em áreas lógicas:
5.1 Dados do Cliente
●	Nome

●	NIF

5.2 Planeamento
●	Objetivo da viagem

●	Roteiro

●	Orçamento estimado



5.3 Transporte
●	Modal escolhido

●	Reservas e bilhetes

●	Aluguer de veículos

5.4 Documentação e Compliance
●	Passaporte e vistos

●	Seguro de viagem

●	Regras e normas locais

5.5 Execução Lógica
●	Check-ins

●	Gestão de bagagens

●	Coordenação de deslocações

5.6 Acompanhamento e Avaliação
●	Monitorização da viagem

●	Gestão de imprevistos

●	Feedback

●	Análise de desempenho



6. Função lerString
void lerString(const char *msg, char *dest, int tam)

Função:
●	Exibir uma mensagem ao utilizador

●	Ler uma string de forma segura usando fgets

●	Remover o caractere \n inserido automaticamente

Importância:
●	Evita buffer overflow

●	Centraliza a leitura de strings

●	Torna o código mais limpo e reutilizável

7. Função registarViagem
void registarViagem(Viagem *v)

Esta função é responsável por recolher todos os dados da viagem através do teclado.
Funcionamento:
●	Solicita os dados por secções organizadas

●	Armazena os valores diretamente na estrutura Viagem

●	Utiliza scanf apenas para valores numéricos (orçamento)

●	Usa getchar() para limpar o buffer de entrada

8. Função guardarViagemFicheiro
void guardarViagemFicheiro(Viagem *v, const char *nomeFicheiro)

Função:
●	Abrir o ficheiro viagens.txt em modo de acrescento ("a")

●	Guardar os dados formatados e organizados

●	Manter os registos anteriores

●	Fechar corretamente o ficheiro

Vantagens:
●	Informação legível

●	Persistência dos dados

●	Facilidade de consulta posterior
9. Função main
int main()

Funcionamento:
 1.	Cria uma variável do tipo Viagem

 2.	Entra num ciclo while controlado pelo utilizador

 3.	Chama a função de registo da viagem

 4.	Guarda os dados no ficheiro

 5.	Pergunta se o utilizador deseja registar outra viagem

 6.	Termina o programa de forma controlada

10. Gestão de Memória e Segurança
●	Uso exclusivo de arrays estáticos

●	Leitura de strings com fgets

●	Limpeza do buffer após scanf

●	Evita acessos indevidos à memória

11. Limitações do Programa
●	Não permite editar ou apagar viagens

●	Não faz validação avançada dos dados

●	Utiliza apenas ficheiros de texto

●	Não possui menu interativo

12. Possíveis Melhorias Futuras
●	Implementação de menus

●	Pesquisa por nome ou NIF

●	Validação de dados

●	Uso de ficheiros binários

●	Modularização em ficheiros .h e .c

13. Conclusão
O programa desenvolvido cumpre com sucesso os objetivos propostos, permitindo o registo estruturado de viagens e o armazenamento persistente da informação.
 Trata-se de uma solução simples, eficiente e segura, adequada para fins académicos e como base para sistemas mais complexos.



