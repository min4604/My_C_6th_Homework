#include<stdio.h>

typedef struct _dates
{
	int years, month, day;
}dates;

typedef struct _order
{
	char num[11];  //�q��s��
	dates date;    //�q�f���
	int amount;    //�q�f���B
}order;
