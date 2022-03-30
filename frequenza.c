#include <stdio.h>
#define LUNGHEZZA_MASSIMA 255
#define OFFSET_NUMERI 48

// definizione prototipi delle funzioni sottostanti al main
void conta_frequenza(char *stringa, char *f, int lunghezza);
int conta_lunghezza(char *stringa);
void print_frequenza(char *stringa); 

int main() {
    // definizione variabili
    char stringa_input[LUNGHEZZA_MASSIMA];
    char frequenza[10];

    // inserimento della stringa
    scanf("%255s", stringa_input);    

    // calcolo lunghezza stringa
    int l = conta_lunghezza(stringa_input); 
    // printf("%d", l); questo serviva per debuggare
    // calcolo e output della frequenza
    conta_frequenza(stringa_input, frequenza, l);
    print_frequenza(frequenza);
    // all'iesima riga aumento il contatore nella posizione i-esima

}

void conta_frequenza(char *stringa, char *f, int lunghezza) {
    // PRE f ha dimensione 10, con tutti gli elementi dell'array a zero; stringa ha dimensione lunghezza 
    // POST alla fine del ciclo f contiene per ogni f[indice_frequenza] il numero di volte nel quale la stringa contine un numero
    for (int i = 0; i < lunghezza; i++) { 
        // scrivere il codice per confrontare l'iesimo elemento di una stringa per poi salvarne la
        // frequenza all'interno dell'array frequenza
        // INV alla fine di ogni i f[indice_frequenza] = stringa[i] - OFFSET + 1
        int indice_frequenza = stringa[i] - OFFSET_NUMERI;
        f[indice_frequenza]+=1; 
    }
}

int conta_lunghezza(char *stringa) {
    int i = 0; 
    while (stringa[i] != '\0') i++;
    return i;
}

void print_frequenza(char *frequenza) {
    for(int i=0; i<10; i+=1) {
        printf("frequenza %d: %d\n", i, frequenza[i]);
    }
}
