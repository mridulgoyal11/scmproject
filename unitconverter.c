
void mass()
{
    //clears the terminal screen
    system("cls");

    int input;
    printf("Welcome to Mass Converter!\n");
    printf("Here is a list of conversion to choose from: \n");
    printf("Enter 1 for ounces to pounds. \n");
    printf("Enter 2 for gram to pounds. \n");
    printf("Enter input: ");
    scanf("%d",&input);

    //clears the terminal screen
    system("cls");

    if(input==1)
    {
        int userinputOunce;
        float ounceToPounds;

        printf("Please enter the ounce amount: ");
        scanf("%d",&userinputOunce);
        ounceToPounds = userinputOunce * 0.0625;
        printf("Pounds: %.2f \n",ounceToPounds);
    }
    else if (input==2)
    {
        int userinputGram;
        float gramsToPounds;

        printf("Please enter the gram amount: ");
        scanf("%d",&userinputGram);
        gramsToPounds = userinputGram * 0.00220462;
        printf("Pounds: %.2f \n",gramsToPounds);
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
     if (category=='M' || category=='m')
        mass();
    else 
        printf("ERROR: Invaild Input. \n ");
}
