/*

Exercise 1:
Write a program that asks the user to guess a generated random number between 1-20.
The player is helped by the program telling whether her guess is higher or lower than the generated number.
When the player guesses correctly, the program/game ends.
Write program in main function.

 */

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // set random seed to current time
    srand(time(NULL));

    // create variables
    int randomNumber = rand() % 21;
    int guess;
    bool correct = false;

    // loop to keep asking for guesses until guess is correct
    while (correct == false)
    {

        cout << "Guess which number?" << endl;
        cin >> guess;

        if (guess == randomNumber)
        {
            cout << "Correct!" << endl;
            correct = true;
        }
        else if (guess < randomNumber)
        {
            cout << "My number is higher than the one you guessed." << endl;
        }
        else if (guess > randomNumber)
        {
            cout << "My number is lower than the one you guessed." << endl;
        }

    }

    return 0;
}
