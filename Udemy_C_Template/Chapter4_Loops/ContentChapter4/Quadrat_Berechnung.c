#include <stdio.h>

int main(){
    
    int seitenlaenge = 0;
    int umfang = 0;
    int flaeche = 0;
    
    // Solange bis eine gültige Seitenlänge eingegeben wurde
    while(1){
        // Seitenlänge einlesen
        printf("Seitenlänge des Quadrats eingeben: ");
        scanf("%d", &seitenlaenge);
        if((seitenlaenge > 0)&&(seitenlaenge < 100 )){
            umfang = 4 * seitenlaenge;
            flaeche = seitenlaenge * seitenlaenge;
            printf("Der Umfang beträgt, %d. Der Flächeninhalt, %d.\n",umfang, flaeche);
            break;
        }
        else{
            printf("Die eingegebene Seitenlänge liegt außerhalb des Gültigkeitsbereichs.\n");
        }
    }
    return 0;
}
