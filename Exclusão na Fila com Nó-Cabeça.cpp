bool excluirDaFila(FILA* f, REGISTRO* reg) {
    if (f->inicio->prox == NULL) return false;

    PONT apagar = f->inicio->prox;
    *reg = apagar->reg;

    f->inicio->prox = apagar->prox;
    if (f->inicio->prox == NULL) {
        f->fim = NULL;
    }
    free(apagar);
    return true;
}
