#include <stdio.h>
#include <stdlib.h>

int main(){

    float cost_prise ;
    float sell_prise ;
    float loss_rupee;
    float profit_rupee;

    printf("Inpute your buy prise: ");
    scanf("%f" , &cost_prise);
    printf("Inpute your sell prise: ");
    scanf("%f" , &sell_prise);

    if (cost_prise > sell_prise)
    {
        loss_rupee = cost_prise - sell_prise;
        printf("you are in loss of %.2f Rupee",loss_rupee);
    }
    else if (sell_prise > cost_prise)
    {
        profit_rupee = sell_prise - cost_prise;
        printf("you are in profit of %.2f Rupee" , profit_rupee);
    }
    else if (sell_prise == cost_prise)
    {
        profit_rupee = sell_prise - cost_prise;
        printf("Nothing to loss or profit of %.2f Rupee" , profit_rupee);
    }
    else{
        printf("Somthing Error !");
    }
    return 0;
}