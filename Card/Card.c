#include "Card.h"
CARD CARD1;
void card_name()         //get card holder name
{
	printf("Enter Card Holder Name\n");
	scanf("%s", &CARD1.name);
}
void card_number()         //get Card PAN function
{
	printf("Enter Card Number\n");
	scanf("%s", &CARD1.number);
}
void card_exp_date()         //get expiration date
{
	printf("Enter Card Expiration year\n");

	scanf("%s", &CARD1.exp_year);
		printf("Enter Card Expiration month\n");

	scanf("%s", &CARD1.exp_month);

}
