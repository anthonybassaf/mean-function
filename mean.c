#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int MeanType;
    double a; 
    double b;

    while (1){

        printf("1-Arithmetic Mean\n");
        printf("2-Geometric Mean\n");
        printf("3-Harmonic Mean\n");
        printf("4-Exit\n");

        printf("Choose the type of mean you want to calculate: ");
        scanf("%d", &MeanType);

        switch (MeanType) 
        {

            double mean;

            case 0:
            case 1:
                printf("Choose a= ");
                scanf("%lf", &a);
                printf("Choose b= ");
                scanf("%lf", &b);

                mean = (a + b)/2;
                printf("The Arthmetic Mean of %.2f and %.2f is %.2f\n\n", a, b, mean);

                break; 

            case 2:
                printf("Choose a= ");
                scanf("%lf", &a);
                printf("Choose b= ");
                scanf("%lf", &b);

                mean = pow((a * b),(0.5));
                printf("The Geometric Mean of %.2f and %.2f is %.2f\n\n", a, b, mean);
                break;
            
            case 3:
                printf("Choose a= ");
                scanf("%lf", &a);
                printf("Choose b= ");
                scanf("%lf", &b);

                mean = (a * b)/(a + b);
                printf("The Harmonic Mean of %.2f and %.2f is %.2f\n\n", a, b, mean);
                break;

            case 4:
                printf("Goodbye!\n\n");
                return 0;

            default:
                printf("Choose a number between 1 and 4\n\n");
                break;
        }
    }
}