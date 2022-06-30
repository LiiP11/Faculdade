#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float celsius,fahreneit,resposta;
    int op;

    printf("===================================\n");
    printf("\tCONVERTER TEMPERATURA\n");
    printf("===================================\n");
    printf("1 - Celsius\t2 - Fahreneit\n");
    printf("\nEscolha a opcao:");
    scanf("%d",&op);
    system("clear");
        
    switch(op){
        case 1:
            printf("Informe a temperatura em graus celsius: ");
            scanf("%f",&celsius);

            resposta=celsius * 1.8 + 32;

            printf("Celsius: %.1f C\nFahreneit: %.1f F\n",celsius,resposta);
        break;

        case 2:
            printf("Informe a temperatura em graus fahreneit:");
            scanf("%f",&fahreneit);

            resposta=(fahreneit-32) / 1.8;
    
            printf("Fahreneit: %.1f F\nCelsius: %.1f C\n",fahreneit,resposta);
        break;
    }
    getchar();
    return 0;
}