#include <stdio.h>
#define LUNGHEZZA_MASSIMA 255
#define OFFSET_NUMERI 48

// definizione prototipi delle funzioni sottostanti al main
void conta_frequenza(char *stringa, char *f, int lunghezza);
int conta_lunghezza(char *stringa);
void print_stringa(char *stringa); 

int main() {
    char stringa_input[LUNGHEZZA_MASSIMA];
    char frequenza[10];
    scanf("%255s", stringa_input);    
    int l = conta_lunghezza(stringa_input);
    printf("%d", l);
    // conta_frequenza(stringa_input, frequenza, l);

    // all'iesima riga aumento il contatore nella posizione i-esima

}

void conta_frequenza(char *stringa, char *f, int lunghezza) {
    for (int i = 0; i < lunghezza; i++) { 
        // scrivere il codice per confrontare l'iesimo elemento di una stringa per poi salvarne la
        // frequenza all'interno dell'array frequenza
        int indice_frequenza = stringa[i] - OFFSET_NUMERI;
        f[indice_frequenza]+=1; 
    }
}

int conta_lunghezza(char *stringa) {
    int i = 0; 
    while (stringa[i] != '\0') i++;
    return i;
}
