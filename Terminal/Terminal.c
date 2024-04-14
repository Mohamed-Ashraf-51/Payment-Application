#include <string.h>
#include "../Card/Card.h"
#include "Terminal.h"
unsigned int trans_year;
unsigned int trans_month;
unsigned int trans_amount;
unsigned int not_exp=0 ;
 CARD_data CARD1_save;
 extern CARD CARD1;

int amount;
void CARD_save()
{
	    strcpy(CARD1_save.cpy_name,CARD1.name );
		strcpy(CARD1_save.cpy_number,CARD1.number );
		CARD1_save.cpy_exp_year=CARD1.exp_year ;
		CARD1_save.cpy_exp_month=CARD1.exp_month ;

}
void get_transaction_date()                      //  Implement getTransactionDate function
{

	printf("Enter Transaction year\n");
		scanf("%d", &trans_year);
			printf("Enter Transaction month\n");
		scanf("%d", &trans_month);
}
void get_transaction_amount()             //Implement gatTransactionAmount function
{  printf("not_exp=",not_exp);
not_exp=0;
if (not_exp=1)
	{
	    printf("Enter Transaction amount\n");
	   scanf("%d", &trans_amount);
	}

}
void check_card_exp()                           //   Implement isCard Expried function
{


	if (  CARD1_save.cpy_exp_year>trans_year )
    {
                                    //the card not expired
	      not_exp= 0;
		  	printf("expired CARD");


    }
	else
	{

        printf("NOT_expired\n");

        		not_exp= 1;
	}
	printf("not_exp=",not_exp);
}
void check_amount()             //Implement isBelow Max Amount function
{   amount=0;
	if (not_exp = 1)
	{
		if (trans_amount > set_max_amount(10000))
		{
			printf("excedded amount");

		}
		else
		{
			amount = 1;
		                     //indicator to go to server
		}
	}

}
int set_max_amount(int x)              //Implement setMaxAmount function
{
	return x;
}
