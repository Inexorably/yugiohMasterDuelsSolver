#ifndef YugiohSolitaire_H
#define YugiohSolitaire_H

#include "YugiohEnums.h"

#include <algorithm>
#include <random>
#include <vector>
#include <string>

#include <QDebug>

using namespace YugiohEnums;

struct YugiohSolitaire
{
    YugiohSolitaire();

    std::vector<YugiohCard> m_baseDeck; // Base list of cards with out drawing / adding / playing any.
    std::vector<YugiohCard> m_hand;
    std::vector<YugiohCard> m_deck;
    std::vector<std::vector<YugiohCard>> m_combos;

    // Mechanics functions
    bool draw(const size_t n);
    void shuffleDeck();

    // Solver functions
    bool handContainsCombo() const;
    void reset(); // Resets the game state by emptying m_hand, and resetting m_deck to m_baseDeck.
    double simulate(const int n);

    // Helper functions
    void printHand() const;
};

#endif // YugiohSolitaire_H
