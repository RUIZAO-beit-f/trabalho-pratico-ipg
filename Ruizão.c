#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_TEXTO 100

typedef struct {
    char nome[TAM_TEXTO];
    char nif[TAM_TEXTO];

    // Planeamento
    char objetivoViagem[TAM_TEXTO];
    char roteiro[TAM_TEXTO];
    float orcamentoEstimado;

    // Transporte
    char modalEscolhido[TAM_TEXTO];
    char reservasBilhetes[TAM_TEXTO];
    char aluguerVeiculos[TAM_TEXTO];

    // Documentacao e compliance
    char passaporteVistos[TAM_TEXTO];
    char seguroViagem[TAM_TEXTO];
    char regrasNormasLocais[TAM_TEXTO];

    // Execucao logica
    char checkIns[TAM_TEXTO];
    char gestaoBagagens[TAM_TEXTO];
    char coordenacaoDeslocacoes[TAM_TEXTO];

    // Acompanhamento / avaliacao
    char monitorizacaoViagem[TAM_TEXTO];
    char gestaoImprevistos[TAM_TEXTO];
    char feedback[TAM_TEXTO];
    char analiseDesempenho[TAM_TEXTO];

} Viagem;

void lerString(const char *msg, char *dest, int tam) {
    printf("%s", msg);
    fgets(dest, tam, stdin);
    dest[strcspn(dest, "\n")] = '\0';
}

void registarViagem(Viagem *v) {
    printf("=== DADOS DO CLIENTE ===\n");
    lerString("Nome: ", v->nome, TAM_TEXTO);
    lerString("NIF: ", v->nif, TAM_TEXTO);

    printf("\n=== PLANEAMENTO ===\n");
    lerString("Objetivo da viagem: ", v->objetivoViagem, TAM_TEXTO);
    lerString("Roteiro: ", v->roteiro, TAM_TEXTO);
    printf("Orcamento estimado: ");
    scanf("%f", &v->orcamentoEstimado);
    getchar();

    printf("\n=== TRANSPORTE ===\n");
    lerString("Modal escolhido: ", v->modalEscolhido, TAM_TEXTO);
    lerString("Reservas e bilhetes: ", v->reservasBilhetes, TAM_TEXTO);
    lerString("Aluguer de veiculos: ", v->aluguerVeiculos, TAM_TEXTO);

    printf("\n=== DOCUMENTACAO E COMPLIANCE ===\n");
    lerString("Passaporte/Vistos: ", v->passaporteVistos, TAM_TEXTO);
    lerString("Seguro de viagem: ", v->seguroViagem, TAM_TEXTO);
    lerString("Regras e normas locais: ", v->regrasNormasLocais, TAM_TEXTO);

    printf("\n=== EXECUCAO LOGICA ===\n");
    lerString("Check-ins: ", v->checkIns, TAM_TEXTO);
    lerString("Gestao de bagagens: ", v->gestaoBagagens, TAM_TEXTO);
    lerString("Coordenacao de deslocacoes: ", v->coordenacaoDeslocacoes, TAM_TEXTO);

    printf("\n=== ACOMPANHAMENTO E AVALIACAO ===\n");
    lerString("Monitorizacao da viagem: ", v->monitorizacaoViagem, TAM_TEXTO);
    lerString("Gestao de imprevistos: ", v->gestaoImprevistos, TAM_TEXTO);
    lerString("Feedback: ", v->feedback, TAM_TEXTO);
    lerString("Analise de desempenho: ", v->analiseDesempenho, TAM_TEXTO);
}

void guardarViagemFicheiro(Viagem *v, const char *nomeFicheiro) {
    FILE *f = fopen(nomeFicheiro, "a");
    if (!f) {
        printf("Erro a abrir ficheiro!\n");
        return;
    }

    fprintf(f, "===== CLIENTE =====\n");
    fprintf(f, "Nome: %s\n", v->nome);
    fprintf(f, "NIF: %s\n", v->nif);

    fprintf(f, "===== PLANEAMENTO =====\n");
    fprintf(f, "Objetivo: %s\n", v->objetivoViagem);
    fprintf(f, "Roteiro: %s\n", v->roteiro);
    fprintf(f, "Orcamento: %.2f\n", v->orcamentoEstimado);

    fprintf(f, "===== TRANSPORTE =====\n");
    fprintf(f, "Modal: %s\n", v->modalEscolhido);
    fprintf(f, "Reservas/Bilhetes: %s\n", v->reservasBilhetes);
    fprintf(f, "Aluguer veiculos: %s\n", v->aluguerVeiculos);

    fprintf(f, "===== DOCUMENTACAO E COMPLIANCE =====\n");
    fprintf(f, "Passaporte/Vistos: %s\n", v->passaporteVistos);
    fprintf(f, "Seguro: %s\n", v->seguroViagem);
    fprintf(f, "Regras locais: %s\n", v->regrasNormasLocais);

    fprintf(f, "===== EXECUCAO LOGICA =====\n");
    fprintf(f, "Check-ins: %s\n", v->checkIns);
    fprintf(f, "Gestao bagagens: %s\n", v->gestaoBagagens);
    fprintf(f, "Coordenacao deslocacoes: %s\n", v->coordenacaoDeslocacoes);

    fprintf(f, "===== ACOMPANHAMENTO/AVALIACAO =====\n");
    fprintf(f, "Monitorizacao: %s\n", v->monitorizacaoViagem);
    fprintf(f, "Imprevistos: %s\n", v->gestaoImprevistos);
    fprintf(f, "Feedback: %s\n", v->feedback);
    fprintf(f, "Analise: %s\n\n", v->analiseDesempenho);

    fclose(f);
    printf("Dados guardados em %s\n", nomeFicheiro);
}

int main() {
    Viagem v;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        registarViagem(&v);
        guardarViagemFicheiro(&v, "viagens.txt");

        printf("\nDeseja registar outra viagem? (s/n): ");
        scanf(" %c", &continuar);
        getchar();
    }

    printf("Programa terminado.\n");
    return 0;
}
