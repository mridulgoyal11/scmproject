#include <stdio.h>
#include <stdlib.h>
void temperature()
{
    //clears the terminal screen
    system("cls");

    int input;
    printf("Welcome to Temperature Converter!\n");
    printf("Here is a list of conversion to choose from: \n");
    printf("Enter 1 for Celsius to Fahrenheit. \n");
    printf("Enter 2 for Fahrenheit to Celisus. \n");
    printf("Enter input: ");
    scanf("%d", &input);

    //clears the terminal screen
    system("cls");

    if(input==1)
    {
        float  celsius, fahrenheit;

        printf("Enter Celisus: ");
        scanf("%f",&celsius);

        fahrenheit = (celsius * 1.8000) + 32.00;

        printf("Fahrenheit: %.2f \n", fahrenheit);
    } 
    else if (input==2)
    {
        float fahrenheit, celsius;

        printf("Enter Fahrenheit: ");
        scanf("%f",&fahrenheit);

        celsius = (fahrenheit - 32)*5/9;

        printf("Celsius: %.5f \n",celsius);
    } 
    else 
        printf("ERROR: Invaild Input.");
}

int main(){

label1:

    //clears the terminal screen
    system("cls");

    char category;
    printf("Welcome to Unit Converter!\n");
    printf("Here is a list of converters to choose from: \n");
    printf("Enter 'T' for Temperature convertion.\n");
    printf("Enter 'M' for Mass convertion.\n");
    printf("Entre 'C' for Currency convertion.\n\n");
    printf("Enter input: ");
    scanf(" %c", &category);

    if(category=='T' || category=='t')
        temperature();
    else 
        printf("ERROR: Invaild Input. \n ");
}
