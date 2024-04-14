#include "string.h"
#include "../Terminal/Terminal.h"
#include "server.h"
int A,B,C,D;
unsigned char v = 0;
 unsigned int balance = 100000;
extern int amount;
extern  CARD_data CARD1_save;
extern int trans_amount;
transaction trans1;
CARD_server CARD_1={"mohamed","1122334455667788",23,10};      //server data

//check if server data =card data
void valid_account()                      //Implement isValidAccount function
{
	    v = 0;
	    if (amount =1)
		{
		 A=0;
		for (int i=0;i<=15;i++)
        {
            if(CARD1_save.cpy_name[i]== CARD_1.name[i])
            {
                A=1;
            }
            else {A=0;}

        }
         B=0;
		for (int i=0;i<=15;i++)
        {
            if(CARD1_save.cpy_number[i]== CARD_1.number[i])
            {
                B=1;
            }
            else {B=0;}

        }
         C=0;
		for (int i=0;i<=15;i++)
        {
            if(CARD1_save.cpy_exp_year== CARD_1.exp_year)
            {
                C=1;
            }
            else {C=0;}

        }
         D=0;
		for (int i=0;i<=15;i++)
        {
            if(CARD1_save.cpy_exp_month== CARD_1.exp_month)
            {
                D=1;
            }
            else {D=0;}

        }
        if(A=B=C=D=1)
		{
			v = 1;
			printf("Valid Account\n");
		}
		else
		{
			printf("invalid account\n");

		}
		}
		else{
                v=0;
                }
}
void av_amount()                              //Implement isAmountAvailable function
{
	if (v = 1)
	{
		if (trans_amount > balance)
		{
			printf("Insuffecient Funds\n");

		}
		else
		{
			balance = balance - trans_amount;
			save_trans();
			printf("Transcation Succedded\n");

		}
	}
}
void save_trans()                 //  Implement saveTransaction function
{
	strcpy(trans1.name, CARD_1.name);
	strcpy(trans1.number, CARD_1.number);
	trans1.t_amount = trans_amount;

}

