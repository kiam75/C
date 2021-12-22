#include <stdio.h>

#define  pi 3.14159265359

int main(){

    // Kreis: Radius vom User einlesen
    float radius = 0;
    float umfang = 0;
    float flaeche = 0;

    printf("Bitte einen Radius eingeben:");
    scanf("%f",&radius);

    // Ist der Wert eine gueltige Zahl
    if(radius > 0){
    //Berechne der Umfang und den Flächeninhalt

        umfang = 2 * pi * radius;
        flaeche = pi * (radius * radius);

    }
    else{
        printf("Keine gültige Zahl eingegeben");
    }

    //Werte ausgeben
    printf("Der Umfang beträgt: %.3f\nDie Fläche beträgt: %.3f\n",umfang,flaeche);

    return 0;
}
