#include "game.h"
#include <ctime>
#include <iostream>
using namespace std;

Game::Game(int num)     // parametri maxNumber
{
    maxNumber = num;
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as maximum value" << endl;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play(void)
{

    // set random seed to current time
    srand(time(NULL));

    randomNumber = rand() % (maxNumber+1);
    bool correct = false;
    numOfGuesses = 1;

    // loop to keep asking for guesses until guess is correct
    while (correct == false)
    {
        cout << "Give your guess between 1-" << maxNumber << endl;
        cin >> playerGuess;

        if (playerGuess == randomNumber)
        {
            cout << "Your guess (" << randomNumber << ") is right! " << endl;
            correct = true;
        }
        else if (playerGuess < randomNumber)
        {
            cout << "Your guess is too low." << endl;
            numOfGuesses++;
        }
        else if (playerGuess > randomNumber)
        {
            cout << "Your guess is too high." << endl;
            numOfGuesses++;
        }
    }

    printGameResult();
}

void Game::printGameResult()
{
    if (numOfGuesses == 1)
    {
        cout << "Wow, you guessed " << randomNumber << " correctly on the first try!" << endl;
    }
    else
    {
        cout << "It took you " << numOfGuesses << " tries to guess " << randomNumber << " correctly!" << endl;
    }
}
