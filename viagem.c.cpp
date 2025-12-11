void lerString(const char *msg, char *dest, int tam) {
    printf("%s", msg);
    fgets(dest, tam, stdin);
    dest[strcspn(dest, "\n")] = '\0';
}

int main() {
    Viagem v;

    printf("=== PLANEAMENTO ===\n");
    lerString("Objetivo da viagem: ", v.planeamento.objetivoViagem, TAM_TEXTO);
    lerString("Roteiro: ", v.planeamento.roteiro, TAM_TEXTO);
    printf("Orcamento estimado: ");
    scanf("%f", &v.planeamento.orcamentoEstimado);
    getchar(); // limpar newline

    printf("\n=== TRANSPORTE ===\n");
    lerString("Modal escolhido: ", v.transporte.modalEscolhido, TAM_TEXTO);
    lerString("Reservas e bilhetes: ", v.transporte.reservasBilhetes, TAM_TEXTO);
    lerString("Aluguer de veiculos: ", v.transporte.aluguerVeiculos, TAM_TEXTO);

    printf("\n=== DOCUMENTACAO E COMPLIANCE ===\n");
    lerString("Passaporte/Vistos: ", v.docComp.passaporteVistos, TAM_TEXTO);
    lerString("Seguro de viagem: ", v.docComp.seguroViagem, TAM_TEXTO);
    lerString("Regras e normas locais: ", v.docComp.regrasNormasLocais, TAM_TEXTO);

    printf("\n=== EXECUCAO LOGICA ===\n");
    lerString("Check-ins: ", v.execucao.checkIns, TAM_TEXTO);
    lerString("Gestao de bagagens: ", v.execucao.gestaoBagagens, TAM_TEXTO);
    lerString("Coordenacao de deslocacoes: ", v.execucao.coordenacaoDeslocacoes, TAM_TEXTO);

    printf("\n=== ACOMPANHAMENTO E AVALIACAO ===\n");
    lerString("Monitorizacao da viagem: ", v.acompanhamento.monitorizacaoViagem, TAM_TEXTO);
    lerString("Gestao de imprevistos: ", v.acompanhamento.gestaoImprevistos, TAM_TEXTO);
    lerString("Feedback: ", v.acompanhamento.feedback, TAM_TEXTO);
    lerString("Analise de desempenho: ", v.acompanhamento.analiseDesempenho, TAM_TEXTO);

    printf("\n===== RESUMO DA VIAGEM =====\n");
    printf("Objetivo: %s\n", v.planeamento.objetivoViagem);
    printf("Roteiro: %s\n", v.planeamento.roteiro);
    printf("Orcamento: %.2f\n", v.planeamento.orcamentoEstimado);
    printf("Modal: %s\n", v.transporte.modalEscolhido);
    // ... podes imprimir o resto dos campos aqui

    return 0;
}
