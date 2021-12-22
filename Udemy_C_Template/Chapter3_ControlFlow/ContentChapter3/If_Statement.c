#include <stdio.h>

int main(){

    int age_maik = 46;
    int age_nikole = 30;

    /*
    if(age_maik > age_nikole){
        printf("Maik ist älter als Nicole.");
    }
    else if(age_maik < age_nikole){
        printf("Nicole ist älter als Maik.");
    }
    else{
        printf("Maik und Nicole sind gleich alt.");
    }
    */
    // If Abfrage mit logischen Operatoren
    int age_saimen = 35;

    if(age_maik > age_nikole && age_maik > age_saimen){
        printf("Maik ist der Älteste.\n");
    }
    else if(age_maik >age_nikole && age_maik < age_saimen){
        printf("Saimen ist der Älteste.\n");
    }
    else if(age_maik < age_nikole && age_nikole > age_saimen){
        printf("Nicole ist die Älteste.\n");
    }
    else{
        printf("Mindestens zweit Personen sind gleich alt.\n");
    }

    // If Abfragen mit Modulo

    if((age_maik % 2) == 0){
        printf("Maiks Alter ist durch zwei teilbar.\n");
    }
    else if ((age_maik % 3) == 0){
        printf("Maiks Alter ist durch 3 teilbar.\n");
    }
    else{
        printf("Maiks Alter ist weder durch 2 noch durch 3 teilbar.");
    }


    return 0;
}
