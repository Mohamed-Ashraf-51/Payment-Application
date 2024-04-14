#include <stdio.h>
#include <stdlib.h>
#include "Card/Card.h"
#include  "Terminal/Terminal.h"
#include "server/Server.h"*/
//unsigned int s[5];
int main()
{
	card_name();
    card_exp_date();
    card_number();
	CARD_save();
	get_transaction_date();
   check_card_exp();
	get_transaction_amount();
    check_amount();
	valid_account();
	av_amount();
	save_trans();
	return 0;
}
