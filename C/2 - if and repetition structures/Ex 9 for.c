#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("insira o tipo de vinho\n");

    int i,tinto=0,branco=0,rose=0,total=0;
    float porr,porb,port;
    char tipo;

    for(i=0;i<10;i++)
    {
        fflush(stdin);
        scanf("%c",&tipo);

        switch(tipo){

            case 't':
                tinto++;
                total++;
                break;

            case 'b':
                branco++;
                total++;
                break;

            case 'r':
                rose++;
                total++;
                break;

            default:
                break;
        }

    }

    port=(tinto*100)/total;
    porb=(branco*100)/total;
    porr=(rose*100)/total;

    printf("tinto %.2f%%\nbranco %.2f%%\nrose %.2f%%\n",port,porb,porr);



    return 0;
}
