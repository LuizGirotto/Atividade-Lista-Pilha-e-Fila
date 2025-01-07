using namespace std;

void exibirPilhaInvertida(PILHA* p) {
    cout << "Pilha (invertida): \" ";
    for (int i = 0; i <= p->topo; i++) {
        cout << p->A[i].chave);
    }
    cout << "\"\n";
}
