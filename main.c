#include <stdio.h>

// Modelo de objeto para cartas
struct card
{
    char state;
    char code[4];
    char city[50];
    int population;
    float area;
    float gdp;
    int tourist_attractions_number;
};

// Obtem os dados do usuario e cria uma nova carta
struct card create_card()
{
    struct card new_card;
    printf("Choose a letter between A and H to represent your state: ");
    scanf(" %c", &new_card.state);
    printf("Create your card code, for example: %c01, %c02, %c03...: ", new_card.state, new_card.state, new_card.state);
    scanf("%s", new_card.code);
    printf("Now add your city (spaces are not allowed, type '_' between words): ");
    scanf("%s", new_card.city);
    printf("Enter the number of inhabitants in the city: ");
    scanf("%d", &new_card.population);
    printf("We're almost there, just a few more details! \n");
    printf("Indicate the city's territorial extension in square kilometers: ");
    scanf("%f", &new_card.area);
    printf("Enter the GDP of the city: ");
    scanf("%f", &new_card.gdp);
    printf("Enter the number of tourist attractions: ");
    scanf("%d", &new_card.tourist_attractions_number);
    return new_card;
}

// Exibe na tela todos os dados de uma carta
void print_card(struct card c, int card_number)
{
    printf("\n----- CARD %d -----\n", card_number);
    printf("State: %c\n", c.state);
    printf("Code: %s\n", c.code);
    printf("City: %s\n", c.city);
    printf("Population: %d\n", c.population);
    printf("Area: %.2f km^2\n", c.area);
    printf("GDP: %.2f\n", c.gdp);
    printf("Tourist Attractions: %d\n", c.tourist_attractions_number);
    printf("----------------------\n\n");
}

// Exibe mensagem de boas vindas ao usuario
void print_initialmsg()
{
    printf("==============================================\n");
    printf("          WELCOME TO SUPER TRUNFO!            \n");
    printf("==============================================\n");
    printf("Get ready to create your card and compete!\n");
    printf("You'll enter the state, code, city, and all\n");
    printf("attributes needed to build your custom card.\n");
    printf("----------------------------------------------\n");
    printf("Let's begin!\n\n");
}

int main()
{
    print_initialmsg();
    // define carta nº1
    struct card card1 = create_card();
    // define carta nº2
    printf("\nAll right, now let's define a second letter:\n\n");
    struct card card2 = create_card();
    // Exibe as cartas
    printf("\nWell done! Here are the cards you created\n\n");
    print_card(card1, 1);
    print_card(card2, 2);
    return 0;
}