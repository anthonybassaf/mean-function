#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{

int MeanType;
double a; 
double b;

printf("1-Arithmetic Mean\n");
printf("2-Geometric Mean\n");
printf("3-Harmonic Mean\n");
printf("4-Exit\n");

printf("Choose the type of mean you want to calculate: ");
scanf("%d", &MeanType);

while (MeanType != 4){


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
            printf("The Arthmetic Mean of %f and %f is %f", a, b, mean);

            break; 

    case 2:

        printf("Choose a= ");
        scanf("%lf", &a);
        printf("Choose b= ");
        scanf("%lf", &b);

            mean = pow((a * b),(0.5));
            printf("The Geometric Mean of %f and %f is %f", a, b, mean);
        break;
        
    case 3:

        printf("Choose a= ");
        scanf("%lf", &a);
        printf("Choose b= ");
        scanf("%lf", &b);

            mean = (a * b)/(a + b);
            printf("The Harmonic Mean of %f and %f is %f", a, b, mean);
        break;

    case 4:
        printf("Goodbye!\n");
        break;


    default:
    printf("Choose a number between 1 and 4\n");
    break;

    }

}   

    return 0;

}