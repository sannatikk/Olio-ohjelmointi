/*

Exercise 3:
Change your previously made function so that the function is given as a parameter the highest possible number for the random generation.
For example, if the parameter is 10, the highest number the program will generate is 10.
In addition, count how many guesses it took for the player to guess correctly, and return this value.
When the game ends, print the number of guesses on the player's screen from the main function.

*/

#include <iostream>
#include <ctime>

using namespace std;

int guessWhichNumber(int maxNumber)
{
    // set random seed to current time
    srand(time(NULL));

    // create variables
    int randomNumber = rand() % (maxNumber+1);
    int guess;
    bool correct = false;
    int guesses = 1;

    // loop to keep asking for guesses until guess is correct
    while (correct == false)
    {

        cout << "Guess which number?" << endl;
        cin >> guess;

        if (guess == randomNumber)
        {
            cout << "Correct! ";
            correct = true;
        }
        else if (guess < randomNumber)
        {
            cout << "My number is higher than the one you guessed." << endl;
            guesses++;
        }
        else if (guess > randomNumber)
        {
            cout << "My number is lower than the one you guessed." << endl;
            guesses++;
        }

    }

    return guesses;
}

/*

int main()
{
    int max;

    cout << "Give max number:" << endl;
    cin >> max;

    int tries = guessWhichNumber(max);

    if (tries == 1)
    {
        cout << "Wow, you guessed correctly on the first try!" << endl;
    }
    else
    {
        cout << "It took you " << tries << " tries to guess correctly!" << endl;
    }

    return 0;
}

*/
