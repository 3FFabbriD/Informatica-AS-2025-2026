#include <stdio.h>
#include <stdlib.h>

#define quota_fissa 100.0f  
#define una_settimana 600.0f
#define due_settimane 1100.0f
#define lenzuola 20.0f

void residence(){
    float costo_totale = 0.0f; 
    int nsettimane = 0;
    int risposta = 0;   
     

    printf("Si vuole affittare la camera per 1 o 2 settimane? "); 
    
    if (scanf("%d", &nsettimane) != 1) {
        printf("Input non valido.\n");
        return; 
    }

    switch (nsettimane) 
    {
    case 1:
        printf("Il costo base per 1 settimana sara' di €%.2f\n", una_settimana); 
        costo_totale = quota_fissa + una_settimana; 
        break;
    case 2: 
        
        printf("Il costo base per 2 settimane sara' di €%.2f\n", due_settimane); 
        costo_totale = quota_fissa + due_settimane;
        break;      
    
    default:
        printf("Scelta non valida. Il soggiorno e' disponibile solo per 1 o 2 settimane.\n");
        return; 
    }
    
    printf("Desidera delle lenzuola in piu'? (si=1/no=2) ");
    if (scanf("%d", &risposta) != 1) {
        printf("Input non valido per le lenzuola.\n");
        
    }

    switch (risposta)
    {
    case 1 :
        printf("Perfetto! Le lenzuola aggiuntive (€%.2f) verranno date insieme alla chiave.\n", lenzuola); 
        costo_totale = costo_totale + lenzuola; 
        break; 
    case 2: 
        printf("Perfetto, la chiave della vostra stanza le verra' consegnata alla reception.\n");
        break; 
    
    default:
       
        printf("Scelta lenzuola non valida, nessun costo aggiuntivo applicato.\n");
        break;
    } 

    
    printf("\nIl costo totale del soggiorno nel nostro residence e' di €%.2f\n", costo_totale); 

}

int main(){
    residence();
    system("pause"); 
    return 0; 
}