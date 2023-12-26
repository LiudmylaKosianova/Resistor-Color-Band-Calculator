#include <stdio.h>
#include <string.h>

double rband_calc(char *Band1, char *Band2, char *Band3);

int main(void){

    char Band1[15];
    char Band2[15];
    char Band3[15];
    double Resistance;

    printf("Welcome to the Resistor Color Band Calculator!\n");
    printf("\tPlease enter three color codes from left to right.\n");
    printf("\tEnter your band 1 color:");
    fgets(Band1, sizeof(Band1), stdin);
    Band1[strlen(Band1) - 1] = '\0';

    printf("\tEnter your band 2 color:");
    fgets(Band2, sizeof(Band2), stdin);
    Band2[strlen(Band2) - 1] = '\0';

    printf("\tEnter your band 3 color:");
    fgets(Band3, sizeof(Band3), stdin);
    Band3[strlen(Band3) - 1] = '\0';

    return 0;
}

double rband_calc(char *Band1, char *Band2, char *Band3){
    double rVal;
    
}