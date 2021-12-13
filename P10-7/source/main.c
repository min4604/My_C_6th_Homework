#include<stdio.h>

struct card
{
	char *face;
	char *suit;
};
int main(void)
{
	struct card aCard;
	struct card *CardPtr;

	aCard.face = "Ace";
	aCard.suit = "Spades";

	CardPtr = &aCard;

	printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ",aCard.suit,  CardPtr->face," of ", CardPtr->suit, (*CardPtr).face," of ", (*CardPtr).suit);
	system("pause");
	return 0;
}