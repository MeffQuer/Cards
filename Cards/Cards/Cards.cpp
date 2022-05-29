#include <iostream>
#include <Windows.h>
using namespace std;

const int clubs = 0;
const int diamonds = 1;
const int hearts = 2;
const int spades = 3;
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

struct card {
    int number; // достоинство
    int suit; // масть
};

int main()
{
    setlocale(LC_ALL, "rus");

    card temp, chosen, prize;
    int position;
    card card1 = { 7, clubs };
    cout << "Карта 1: 7 треф\n";
    card card2 = { jack, hearts };
    cout << "Карта 2: валет червей\n";
    card card3 = {ace, spades};
    cout << "Карта 3: туз пик\n";
    prize = card3;
    cout << "Меняем 1 карту и 3 карту...\n";
    temp = card3;
    card3 = card1;
    card1 = temp;
    Sleep(1500);
    cout << "Меняем местами 2 карту и 3 карту...\n";
    temp = card3;
    card3 = card2;
    card2 = temp;
    Sleep(2500);
    cout << "Меняем местами 1 карту и 2 карту...\n";
    temp = card2;
    card2 = card1;
    card1 = temp;
    Sleep(1500);
    cout << "На какой позиции (1, 2 или 3) теперь туз пик? ";
    cin >> position;
    switch (position)
    {
    case 1:
        chosen = card1;
        break;
    case 2:
        chosen = card2;
        break;
    case 3:
        chosen = card3;
        break;
    }
    if (chosen.number == prize.number)
    {
        cout << "Правильный выбор карты!\n";
    }
    else
    {
        cout << "Не верынй выбор карты!\n";
    }
    return 0;
}