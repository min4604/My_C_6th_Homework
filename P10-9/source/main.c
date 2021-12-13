#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define CARDS 52
#define FACES 13

struct card
{
	const char *face;
	const char *suit;
};
typedef struct card Card;
	
void fillDeck(Card * const wDeck, const char * wFace[], const char*wSuit[]);
void shuffle(Card * const wDeck);
void deal(const Card *const wDeck);

int main(void)
{
	const char *suit[4] = { "Hearts","Diamonds","Clubs","Spades" };

	const char *face[13] = { "Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King" };

	Card deck[52];
		
	srand(time(0));
	fillDeck(deck, face, suit);
	shuffle(deck);
	deal(deck);

	system("pause");
	return 0;
}

void fillDeck(Card * const wDeck, const char * wFace[], const char*wSuit[])
{
	int i;
	for (i = 0; i < CARDS; i++)
	{
		wDeck[i].face = wFace[i%FACES];
		wDeck[i].suit = wSuit[i / FACES];
	}
}

void shuffle(Card * const wDeck)
{
	int i, j;
	Card RAM;

	for (i = 0; i < CARDS; i++)
	{
		j = rand() % CARDS;
		RAM = wDeck[i];
		wDeck[i] = wDeck[j];
		wDeck[j] = RAM;
	}
}

void deal(const Card *const wDeck)
{
	int i;

	for (i=0; i <CARDS; i++)
	{
		
		printf("%5s of %-8s%c", wDeck[i].face, wDeck[i].suit, (i+1) % 4 == 0 ? '\n' : '\t');
	}
}