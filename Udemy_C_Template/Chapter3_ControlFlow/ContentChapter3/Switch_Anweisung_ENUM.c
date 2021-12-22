#include <stdio.h>

enum Trink{
//Wenn man keinen Wert definiert, dann wird von 0 an durchnummeriert.
//Ein Enum ist ein 32 bit integer
    COLA,
    ICETEA,
    WATER,
    COFFEE
};

int main(){

//    int cola = 0;
//    int icetea = 1;
//    int water = 2;
//    int coffee = 3;

    int selection;

    printf("Please enter a number:");
    scanf("%d",&selection);

    switch(selection){
        case COLA:
            {
                printf("Cola.");
                break;
            }
        case ICETEA:
            {
                printf("icetea.");
                break;
            }
        case WATER:
            {
                printf("water.");
                break;
            }
        case COFFEE:
            {
                printf("coffee.");
                break;
            }
        default:
            {
                printf("Keine gültige Nummer eingegeben.");
            }
    }


    return 0;
}
