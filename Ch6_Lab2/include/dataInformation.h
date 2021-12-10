#include<stdio.h>

typedef struct _dates
{
	int years, month, day;
}dates;

typedef struct _order
{
	char num[11];  //訂單編號
	dates date;    //訂貨日期
	int amount;    //訂貨金額
}order;
