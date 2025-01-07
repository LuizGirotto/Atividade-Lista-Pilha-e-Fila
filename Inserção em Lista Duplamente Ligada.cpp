bool inserirElemListaOrd(LISTA* l, REGISTRO reg) {

    PONT novo = (PONT)malloc(sizeof(ELEMENTO));

    if (!novo) return false;
    novo->reg = reg;
    novo->prox = NULL;
    novo->ant = NULL;

    PONT atual = l->inicio;
    PONT anterior = NULL;

    while (atual != NULL && atu->reg.chave < reg.chave) {
        anterior = atual;
        atual = atual->prox;
    }
    if (atual != NULL && atual->reg.chave == reg.chave) {
        free(novo);
        return false;
    }
    if (anterior == NULL) {
        novo->prox = l->inicio;
        l->inicio = novo;
    } else {
        anterior->prox = novo;
        novo->ant = anterior;
    }
    if (atual != NULL) atual->ant = novo;
        novo->prox = atual;

    return true;
}
