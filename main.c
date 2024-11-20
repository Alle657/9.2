#include <stdio.h>

int vendita(int prezzo, int sconto){
    int prezzoscontato = prezzo - (prezzo * sconto)/100;
    return prezzoscontato;
}




int main() {
    int inputPrezzo, inputSconto;
    printf("inserisci il prezzo di vendita:\n");
    scanf("%d", &inputPrezzo);
    printf("inserisci lo sconto: \n");
    scanf("%d", &inputSconto);
    int risultato = vendita(inputPrezzo, inputSconto);
    printf("Il prezzo scontato e': %d\n", risultato);


    return 0;
}
