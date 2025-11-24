#ifndef BLACKJACK_PLAYING_POSITION_H
#define BLACKJACK_PLAYING_POSITION_H

#include "constants.h"

typedef struct
{
#ifdef JURISDICTION_ALLOWS_BACK_BETTING
    unsigned long long int betting_box[3];
#else
    unsigned long long int betting_box;
#endif
} playing_position;

#endif
