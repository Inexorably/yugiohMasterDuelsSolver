#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_TestButton_clicked()
{
    YugiohSolitaire g;
    g.m_baseDeck.push_back(KarakuriGamamdl4624Shirokunishi);
    g.m_baseDeck.push_back(KarakuriGamamdl4624Shirokunishi);
    g.m_baseDeck.push_back(KarakuriBarrelmdl96Shinkuro);
    g.m_baseDeck.push_back(KarakuriBarrelmdl96Shinkuro);
    g.m_baseDeck.push_back(MaxxC);
    g.m_baseDeck.push_back(MaxxC);
    g.m_baseDeck.push_back(MaxxC);
    g.m_baseDeck.push_back(KarakuriStrategistmdl248Nishipachi);
    g.m_baseDeck.push_back(KarakuriStrategistmdl248Nishipachi);
    g.m_baseDeck.push_back(KarakuriKomachimdl224Ninishi);
    g.m_baseDeck.push_back(KarakuriKomachimdl224Ninishi);
    g.m_baseDeck.push_back(KarakuriKomachimdl224Ninishi);
    g.m_baseDeck.push_back(KarakuriSoldiermdl236Nisamu);
    g.m_baseDeck.push_back(KarakuriNinjamdl919Kuick);
    g.m_baseDeck.push_back(KarakuriNinjamdl919Kuick);
    g.m_baseDeck.push_back(KarakuriNinjamdl919Kuick);
    g.m_baseDeck.push_back(SolarWindJammer);
    g.m_baseDeck.push_back(SolarWindJammer);
    g.m_baseDeck.push_back(SolarWindJammer);
    g.m_baseDeck.push_back(KarakuriBonzemdl9763Kunamzan);
    g.m_baseDeck.push_back(KarakuriBonzemdl9763Kunamzan);
    g.m_baseDeck.push_back(KarakuriBonzemdl9763Kunamzan);
    g.m_baseDeck.push_back(GizmekKakutheSupremeShiningSkyStag);
    g.m_baseDeck.push_back(GizmekKakutheSupremeShiningSkyStag);
    g.m_baseDeck.push_back(GizmekKakutheSupremeShiningSkyStag);
    g.m_baseDeck.push_back(Nibiru);
    g.m_baseDeck.push_back(MonsterReborn);
    g.m_baseDeck.push_back(InstantFusion);
    g.m_baseDeck.push_back(KarakuriCashCache);
    g.m_baseDeck.push_back(KarakuriCashCache);
    g.m_baseDeck.push_back(KarakuriCashCache);
    g.m_baseDeck.push_back(IronCall);
    g.m_baseDeck.push_back(IronCall);
    g.m_baseDeck.push_back(IronCall);
    g.m_baseDeck.push_back(KarakuriGamaOil);
    g.m_baseDeck.push_back(KarakuriGamaOil);
    g.m_baseDeck.push_back(KarakuriGamaOil);
    g.m_baseDeck.push_back(KarakuriAnatomy);
    g.m_baseDeck.push_back(KarakuriAnatomy);
    g.m_baseDeck.push_back(KarakuriAnatomy);

    std::vector<YugiohCard> combo;

    combo.push_back(KarakuriKomachimdl224Ninishi);
    combo.push_back(KarakuriNinjamdl919Kuick);
    combo.push_back(IronCall);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());
    combo.push_back(KarakuriKomachimdl224Ninishi);
    combo.push_back(KarakuriNinjamdl919Kuick);
    combo.push_back(KarakuriGamaOil);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());
    combo.push_back(KarakuriKomachimdl224Ninishi);
    combo.push_back(KarakuriNinjamdl919Kuick);
    combo.push_back(MonsterReborn);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());

    combo.push_back(KarakuriKomachimdl224Ninishi);
    combo.push_back(KarakuriSoldiermdl236Nisamu);
    combo.push_back(IronCall);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());
    combo.push_back(KarakuriKomachimdl224Ninishi);
    combo.push_back(KarakuriSoldiermdl236Nisamu);
    combo.push_back(KarakuriGamaOil);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());
    combo.push_back(KarakuriKomachimdl224Ninishi);
    combo.push_back(KarakuriSoldiermdl236Nisamu);
    combo.push_back(MonsterReborn);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());

    combo.push_back(KarakuriKomachimdl224Ninishi);
    combo.push_back(KarakuriCashCache);
    combo.push_back(IronCall);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());
    combo.push_back(KarakuriKomachimdl224Ninishi);
    combo.push_back(KarakuriCashCache);
    combo.push_back(KarakuriGamaOil);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());
    combo.push_back(KarakuriKomachimdl224Ninishi);
    combo.push_back(KarakuriCashCache);
    combo.push_back(MonsterReborn);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());

    combo.push_back(SolarWindJammer);
    combo.push_back(KarakuriKomachimdl224Ninishi);
    combo.push_back(IronCall);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());
    combo.push_back(SolarWindJammer);
    combo.push_back(KarakuriKomachimdl224Ninishi);
    combo.push_back(KarakuriGamaOil);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());
    combo.push_back(SolarWindJammer);
    combo.push_back(KarakuriKomachimdl224Ninishi);
    combo.push_back(MonsterReborn);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());

    combo.push_back(SolarWindJammer);
    combo.push_back(KarakuriBarrelmdl96Shinkuro);
    combo.push_back(IronCall);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());
    combo.push_back(SolarWindJammer);
    combo.push_back(KarakuriBarrelmdl96Shinkuro);
    combo.push_back(KarakuriGamaOil);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());
    combo.push_back(SolarWindJammer);
    combo.push_back(KarakuriBarrelmdl96Shinkuro);
    combo.push_back(MonsterReborn);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());

    combo.push_back(InstantFusion);
    combo.push_back(KarakuriKomachimdl224Ninishi);
    combo.push_back(IronCall);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());
    combo.push_back(InstantFusion);
    combo.push_back(KarakuriKomachimdl224Ninishi);
    combo.push_back(KarakuriGamaOil);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());
    combo.push_back(InstantFusion);
    combo.push_back(KarakuriKomachimdl224Ninishi);
    combo.push_back(MonsterReborn);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());

    combo.push_back(InstantFusion);
    combo.push_back(KarakuriBarrelmdl96Shinkuro);
    combo.push_back(IronCall);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());
    combo.push_back(InstantFusion);
    combo.push_back(KarakuriBarrelmdl96Shinkuro);
    combo.push_back(KarakuriGamaOil);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());
    combo.push_back(InstantFusion);
    combo.push_back(KarakuriBarrelmdl96Shinkuro);
    combo.push_back(MonsterReborn);
    g.m_combos.push_back(combo);
    combo.erase(combo.begin(), combo.end());

    // TODO_S: Output how often combos / card(s) are dead.
    // TODO_S: Assign values to combos for score weighting.
    // TODO_S: Genetic algorithm to modify cards in deck and optimize deck for combos.

    qDebug() << "Rate: " << g.simulate(50000);


}

