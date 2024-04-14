#ifndef Header2_card
#define Header2_card
typedef struct CARD_server {
	unsigned char name[16];
	unsigned char number[16];
	unsigned int exp_year;
    unsigned int exp_month;
}CARD_server;
typedef struct transaction
{
	unsigned char name[16];
	unsigned char number[16];
	unsigned int t_amount;
}transaction;
void valid_account();
void av_amount();
void save_trans();
#endif
