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
    printf("\tEnter your band 2 color:");
    fgets(Band1, sizeof(Band2), stdin);
    printf("\tEnter your band 3 color:");
    fgets(Band1, sizeof(Band3), stdin);

    return 0;
}