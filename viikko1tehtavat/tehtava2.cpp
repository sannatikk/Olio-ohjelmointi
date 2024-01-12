/*

Exercise 2:
Change previous code so that it its own function, which is then called from the main function.

 */

#include <iostream>
#include <ctime>

using namespace std;

void guessWhichNumber(void)
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
}

/*

int main()
{

    guessWhichNumber();

    return 0;
}

*/
