bool excluirDaFila(FILA* f, REGISTRO* reg) {
    if (f->inicio->prox == NULL) return false;  // Fila vazia

    PONT apagar = f->inicio->prox;
    *reg = apagar->reg;

    f->inicio->prox = apagar->prox;
    if (f->inicio->prox == NULL) {  // Caso a fila fique vazia
        f->fim = NULL;
    }

    free(apagar);
    return true;
}

