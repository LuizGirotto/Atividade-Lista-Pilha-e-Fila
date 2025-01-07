bool inserirNaFila(FILA* f, REGISTRO reg) {
    PONT novo = (PONT)malloc(sizeof(ELEMENTO));
    if (!novo) return false;

    novo->reg = reg;
    novo->prox = NULL;

    if (f->inicio->prox == NULL) {
        f->inicio->prox = novo;
    } else {
        f->fim->prox = novo;
    }
    f->fim = novo;
    return true;
}
