#ifndef Header_card
#define Header_card
 typedef struct CARD {
	unsigned char name[16];
	unsigned char number[16];
	unsigned int exp_year;
    unsigned int exp_month;
} CARD;
 void card_name();
 void card_number();
void card_exp_date();
#endif
