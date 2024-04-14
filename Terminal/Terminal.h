#ifndef Header1_card
#define Header1_card
typedef struct CARD_data {
	unsigned char cpy_name[16];
	unsigned char cpy_number[16];
	unsigned int cpy_exp_year;
	unsigned int cpy_exp_month;
}CARD_data;
void CARD_save();
void get_transaction_date();
void get_transaction_amount();
void check_card_exp();
void check_amount();
int set_max_amount(int x);

#endif
