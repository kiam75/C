#include <stdio.h>

int main()
{
    //Lese das Alter des Benutzers in der Konsole ein (Positive ganze Zahl)
    unsigned short alter = 0;
    unsigned int anzahl_tage = 0;
    unsigned int anzahl_stunden = 0;
    unsigned int anzahl_minuten = 0;
    unsigned int anzahl_sekunden = 0;

    printf("Bitte gibt dein Alter ein: ");
    scanf("%hi",&alter);
    anzahl_tage = alter * 365u;
    anzahl_stunden = anzahl_tage * 24u;
    anzahl_minuten = anzahl_stunden * 60u;
    anzahl_sekunden = anzahl_stunden * 3600u;

    printf("\nDu lebst schon %d Tage, %d Stunden, %d Minuten  und %d Sekunden",anzahl_tage,anzahl_stunden,anzahl_minuten,anzahl_sekunden);



    return 0;
}
