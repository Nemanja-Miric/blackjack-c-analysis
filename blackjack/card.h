#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H

/*
  Suits:
    C: Clubs
    D: Diamonds
    H: Hearts
    S: Spades
  Ranks:
    A: Ace
    2-10: 2-10
    J: Jack
    Q: Queen
    K: King
*/

char SUITS[4] = {'C', 'D', 'H', 'S'};
char RANKS[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K'};

typedef struct
{
    char suit;
    char rank;
} card;

#endif
