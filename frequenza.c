#include <stdio.h>
#define LUNGHEZZA_MASSIMA 255


void conta_frequenza(char *stringa, char *f, int lunghezza);

int main() {
    char stringa_input[LUNGHEZZA_MASSIMA];
    char frequenza[10];
    
    // all'iesima riga aumento il contatore nella posizione i-esima

}

void conta_frequenza(char *stringa, char *f, int lunghezza) {
    for (int i = 0; i < lunghezza; i++) { 
        // scrivere il codice per confrontare l'iesimo elemento di una stringa per poi salvarne la
        // frequenza all'interno dell'array frequenza
        int indice_frequenza = stringa[i];
        f[indice_frequenza]+=1; 
    }
}
