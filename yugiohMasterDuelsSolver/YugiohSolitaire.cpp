#include "YugiohSolitaire.h"

YugiohSolitaire::YugiohSolitaire()
{

}

/*********************** Mechanics Functions ***********************/

bool YugiohSolitaire::draw(const size_t n)
{
    bool enoughCards = m_deck.size() > n;
    if (enoughCards)
    {
        m_hand.insert(m_hand.end(), m_deck.begin(), m_deck.begin()+n);
        m_deck.erase(m_deck.begin(), m_deck.begin()+n);
    }

    return enoughCards;
}

void YugiohSolitaire::shuffleDeck()
{
    static std::random_device rd;
    static std::mt19937 e{rd()};
    std::shuffle(m_deck.begin(), m_deck.end(), e);
}

/*********************** Mechanics Functions End ***********************/

/*********************** Solver Functions ***********************/

bool YugiohSolitaire::handContainsCombo() const
{
    bool containsCombo = false;
    if (!m_hand.empty())
    {
        // For each combo...
        for (const std::vector<YugiohCard>& c : m_combos)
        {
            // Check the hand for each card of the current combo.
            for (unsigned int i = 0; i < c.size(); ++i)
            {
                // If the hand is missing a piece of the combo, we break.
                if (std::find(m_hand.begin(),m_hand.end(), c[i]) == m_hand.end())
                {
                    break;
                }
                else if (c.size()-1 == i)
                {
                    containsCombo = true;
                }
            }
            if (containsCombo)
            {
                break;
            }
        }
    }
    return containsCombo;
}

void YugiohSolitaire::reset()
{
    m_hand.erase(m_hand.begin(), m_hand.end());
    m_deck = m_baseDeck;
}

double YugiohSolitaire::simulate(const int n)
{
    int successes = 0;
    for (int i = 0; i < n; ++i)
    {
        reset();
        shuffleDeck();
        draw(5);
        if (handContainsCombo())
        {
            ++successes;
        }
    }

    return static_cast<double>(successes)/static_cast<double>(n);
}

/*********************** Solver Functions End ***********************/

/*********************** Helper Functions ***********************/

// TODO_S: Update with QMap for strings.
void YugiohSolitaire::printHand() const
{
    for (const YugiohCard& c : m_hand)
    {
        qDebug() << c;
    }
}

/*********************** Helper Functions End ***********************/
