#include <stdio.h>


int main()
{

    printf("<\t^\t^\t^\t^\t>\n");
    for (int i = 1; i <= 4; i++){
        printf("<     ");
        for (int k = 1; k <=4; k++){
            
            if(k == 4){
                printf("(%d,%d)\t>\n",i,k);
            }
            else{
                printf("(%d,%d)   ",i,k);
               
            }
        }
    }
    printf("<\tv\tv\tv\tv\t>\n");

    return 0;
}
